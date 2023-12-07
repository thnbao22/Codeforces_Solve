#include<iostream>
//https://codeforces.com/problemset/problem/1076/B
int main() {
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);
    long long n = 0;
    std::cin >> n;
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i) {
            continue;
        }
        std::cout << 1 + (n - i) / 2;
        return 0;
    }
    std::cout << 1;
    return 0;
}
