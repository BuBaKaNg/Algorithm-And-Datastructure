#include <iostream>
using namespace std;

int find_y(int x) {
    int low_bit = x & -x;  // Lấy bit 1 thấp nhất của x
    int next_bit = 1;
    
    while (next_bit & x) {
        next_bit <<= 1;  // Tìm bit chưa có trong x
    }

    int y = low_bit | next_bit;  // Chọn y có một bit trong x và một bit ngoài x

    return (y < x) ? y : -1;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        cout << find_y(x) << endl;
    }

    return 0;
}
