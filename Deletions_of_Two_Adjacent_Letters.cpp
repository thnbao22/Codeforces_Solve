#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/1650/A
int main() {
    int test; cin >> test;
    cin.ignore();
    while (test--) {
        string s;
        cin >> s;
        char c;
        cin >> c;
        bool found = false;
        for (int i = 0; i < s.length(); ++i) {
            if (!(i & 1) && (s[i] == c)) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
