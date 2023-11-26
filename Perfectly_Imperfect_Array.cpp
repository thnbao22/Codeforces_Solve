#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
//https://codeforces.com/problemset/problem/1514/A
bool check_square(int n) {
    int q = sqrt(n);
    return q * q == n;
}
int main() {
    int test; cin >> test;
    while (test--) {
        int n; cin >> n;
        vector<int> v(n);
        bool found_non_sqrt = false;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = 0; i < n; ++i) {
            if (!check_square(v[i])) {
                found_non_sqrt = true;
                break;
            }
        }
        if (found_non_sqrt) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
