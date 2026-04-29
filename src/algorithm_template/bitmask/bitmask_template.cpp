#include <iostream>

using namespace std;

#define SET_BIT(x, pos)    ((x) | (1 << (pos)))   // Bật bit tại vị trí pos
#define CLEAR_BIT(x, pos)  ((x) & ~(1 << (pos)))  // Tắt bit tại vị trí pos
#define TOGGLE_BIT(x, pos) ((x) ^ (1 << (pos)))   // Đảo bit tại vị trí pos
#define CHECK_BIT(x, pos)  (((x) >> (pos)) & 1)   // Kiểm tra bit tại vị trí pos

int main() {
    int x = 0b1010;  // 10 trong hệ nhị phân

    x = SET_BIT(x, 1);    // Bật bit thứ 1 → x = 0b1011 (11)
    x = CLEAR_BIT(x, 3);  // Tắt bit thứ 3 → x = 0b0011 (3)
    x = TOGGLE_BIT(x, 2); // Đảo bit thứ 2 → x = 0b0111 (7)
    
    cout << "Bit thứ 2 của x: " << CHECK_BIT(x, 2) << endl; // Kết quả: 1

    return 0;
}