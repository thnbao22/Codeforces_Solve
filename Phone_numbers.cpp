#include <iostream>
#include <string>
//https://codeforces.com/problemset/problem/25/B
void solve(const std::string& phoneNumber) {
    int len = phoneNumber.length();
    if (!(len & 1)) { // do dai chuoi trang thi in cach 2 so
        std::cout << phoneNumber.substr(0, 2);
        if (len > 2) {
            std::cout << "-";
        }
        for (int i = 2; i < len; i += 2) {
            std::cout << phoneNumber.substr(i, 2);
            if (i < len - 2) {
                std::cout << "-";
            }
        }

    }
    else {
        std::cout << phoneNumber.substr(0, 3);
        if (len > 3) {
            std::cout << "-";
        }
        for (int i = 3; i < len; i += 2) { // tu sau 3 so dau tien thi ta in 2 so
            std::cout << phoneNumber.substr(i, 2); // cat tu vi tri i 2 ki tu
            if (i < len - 2) {
                std::cout << "-";
            }
        }
    }
}
int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
    int num = 0;
    std::string phoneNumber;
    std::cin >> num >> phoneNumber;
    solve(phoneNumber);
    return 0;
}
