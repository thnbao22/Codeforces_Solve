#include <iostream>
#include <string>
//https://codeforces.com/problemset/problem/1177/A
int main() {
    int k = 0;
    std::cin >> k;

    std::string s;
    for (int i = 1; s.size() <= k; ++i) {
        s += std::to_string(i);
    }

    std::cout << s[k - 1] << std::endl;

    return 0;
}
