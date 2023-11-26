#include <iostream>
#include <vector>
//https://codeforces.com/problemset/problem/139/A
int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(7);
    for (int i = 0; i < 7; ++i) {
        std::cin >> a[i];
    }
    int day = 0;
    while (n > 0) {
        n -= a[day];
        day = (day + 1) % 7;
    }
    if (day == 0) {
        day = 7;
    }
    std::cout << day;
    return 0;
}
