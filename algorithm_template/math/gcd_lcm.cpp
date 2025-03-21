#include <iostream>

// Template tính GCD (Ước số chung lớn nhất) bằng thuật toán Euclid
template <typename T>
T gcd(T a, T b) {
    while (b != 0) {
        T temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Template tính LCM (Bội số chung nhỏ nhất)
template <typename T>
T lcm(T a, T b) {
    return (a / gcd(a, b)) * b;  // Tránh tràn số bằng cách chia trước
}

int main() {
    int a = 12, b = 18;
    std::cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << "\n";
    std::cout << "LCM(" << a << ", " << b << ") = " << lcm(a, b) << "\n";

    long x = 1234567890, y = 987654321;
    std::cout << "GCD(" << x << ", " << y << ") = " << gcd(x, y) << "\n";
    std::cout << "LCM(" << x << ", " << y << ") = " << lcm(x, y) << "\n";

    return 0;
}
