#include<iostream>
#include<cmath>
#include<unordered_set>
using namespace std;
//https://codeforces.com/problemset/problem/1619/B
int main() {
    int test; cin >> test;
    while (test--) {
        int n; cin >> n;
        unordered_set<int> uns;
        // vòng lặp duyệt số có bình phương là một số nguyên 
        for (int i = 1; i * i <= n; ++i) {
            uns.insert(i * i);
        }
        for (int j = 2; j * j * j <= n; ++j) {
            uns.insert(j * j * j);
        }
        cout << uns.size() << "\n";
    }
    return 0;
}
