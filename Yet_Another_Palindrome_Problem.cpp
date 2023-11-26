#include <iostream>
#include <vector>
#include <map>
//https://codeforces.com/problemset/problem/1324/B
bool has_palindrome_subsequence(const std::vector<int>& a) {
    std::map<int, int> first_occurrence;
    for (int i = 0; i < a.size(); ++i) {
        if (first_occurrence.count(a[i]) && i - first_occurrence[a[i]] >= 2) {
            return true;
        }
        if (!first_occurrence.count(a[i])) {
            first_occurrence[a[i]] = i;
        }
    }
    return false;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        std::cout << (has_palindrome_subsequence(a) ? "YES" : "NO") << std::endl;
    }
    return 0;
}
