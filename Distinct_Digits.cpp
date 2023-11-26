#include<iostream>
#include<unordered_set>
using namespace std;
//https://codeforces.com/problemset/submit
bool havedistinctdigit(int n) {
    unordered_set<int> digits;
    while (n) {
        int x = n % 10;
        if (digits.find(x) != digits.end()) {
            return false;
        }
        digits.insert(x);
        n /= 10;
    }
    return true;
}

int distinctdigit(int l, int r) {
    while (!havedistinctdigit(l) && l <= r) {
        l++;
    }
    return l;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l, r; cin >> l >> r;
    int result = distinctdigit(l, r);
    if (result > r) {
        cout << -1;
    }
    else {
        cout << result;
    }
    return 0;
}
