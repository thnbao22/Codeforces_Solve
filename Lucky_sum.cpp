#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
vector<ll> luckyNumbers;
//https://codeforces.com/problemset/problem/121/A
void generateLuckyNumber(ll num) {
    if (num > 1e10) {
        return;
    }
    luckyNumbers.push_back(num * 10 + 4);
    luckyNumbers.push_back(num * 10 + 7);
    generateLuckyNumber(num*10+4);
    generateLuckyNumber(num*10+7);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    generateLuckyNumber(0);
    sort(luckyNumbers.begin(), luckyNumbers.end());
    ll l, r;
    cin >> l >> r;
    ll res = 0;
    for (ll i = l; i <= r; ) {
        ll nextLuckyNumber = *lower_bound(luckyNumbers.begin(), luckyNumbers.end(), i);
        ll j = min(r, nextLuckyNumber);
        res += (j - i + 1) * nextLuckyNumber;
        i = j + 1;
    }
    cout << res;
    return 0;
}
