#include<iostream>
//https://codeforces.com/problemset/problem/552/B
int main() {
    long long n = 0;
    std::cin >> n;
    long long res = 0;
    for (long long i = 1; i <= n; i *= 10) {
        res += n - i + 1;
    }
    std::cout << res;
    return 0;
}