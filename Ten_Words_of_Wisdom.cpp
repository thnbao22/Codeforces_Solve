#include<iostream>
#include<vector>
#include<utility>
using namespace std;
//https://codeforces.com/problemset/problem/1850/B
int main() {
    int test; cin >> test;
    while (test--) {
        int n; cin >> n;
        int winner = -1;
        int max_quaily = -1;
        vector<pair<int, int>> ab(n);
        for (int i = 0; i < n; ++i) {
            cin >> ab[i].first >> ab[i].second;
            if (ab[i].first <= 10 && ab[i].second > max_quaily) {
                winner = i;
                max_quaily = ab[i].second;
            }
        }
        cout << winner + 1 << endl;
    }
    return 0;
}
