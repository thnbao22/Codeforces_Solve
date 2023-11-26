#include <iostream>
//https://codeforces.com/problemset/problem/1141/A
int main() {
    int n, m;
    std::cin >> n >> m;
    if (m % n != 0) {
        std::cout << -1 << std::endl;
        return 0;
    }
    int x = m / n;
    int cnt = 0;
    while (x % 2 == 0) {
        x /= 2;
        cnt++;
    }
    while (x % 3 == 0) {
        x /= 3;
        cnt++;
    }
    if (x != 1) {
        std::cout << -1 << std::endl;
    }
    else {
        std::cout << cnt << std::endl;
    }
    return 0;
}
