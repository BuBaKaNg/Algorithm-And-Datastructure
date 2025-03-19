#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(const vector<int>& arr) {
    int n = arr.size();
    int totalSubsets = 1 << n; // 2^n t?p con

    for (int mask = 0; mask < totalSubsets; mask++) {
        cout << "{ ";
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) { // N?u bit th? i c?a mask = 1
                cout << arr[i] << " ";
            }
        }
        cout << "}\n";
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    generateSubsets(arr);
    return 0;
}