#include<iostream>
#include<string>
//https://codeforces.com/problemset/problem/1520/B
int countOrdinaryNumbers(int n) {
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        long long num = 0;
        for (int j = 1; j <= 10; ++j) {
            num = num * 10 + i;
            if (num <= n) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int testcase = 0; std::cin >> testcase;
    while (testcase--) {
        int n = 0; std::cin >> n;
        std::cout << countOrdinaryNumbers(n) << "\n";
    }
    return 0;
}
