#include<iostream>
//https://codeforces.com/problemset/problem/552/B
int main() {
    int n;
    std::cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i *= 10) {
        res += n - i + 1;
    }
    std::cout << res;
    return 0;
}