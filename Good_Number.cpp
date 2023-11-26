#include <iostream>
#include <vector>
//https://codeforces.com/problemset/problem/365/A
bool is_k_good(int n, int k) {
    std::vector<bool> digits(k + 1, false);
    while (n > 0) {
        int digit = n % 10;
        if (digit <= k) {
            digits[digit] = true;
        }
        n /= 10;
    }
    for (bool has_digit : digits) {
        if (!has_digit) {
            return false;
        }
    }
    return true;
}

int count_k_good(const std::vector<int>& a, int k) {
    int count = 0;
    for (int n : a) {
        if (is_k_good(n, k)) {
            ++count;
        }
    }
    return count;
}

int main() {
    int k, n;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::cout << count_k_good(a, k) << std::endl;
    return 0;
}
