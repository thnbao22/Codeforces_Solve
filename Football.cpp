#include <iostream>
#include <string>
using namespace std;
//https://codeforces.com/problemset/problem/96/A
int main() {
    string s;
    cin >> s;
    char last = s[0];
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == last) {
            count++;
            if (count >= 7) {
                cout << "YES";
                return 0;
            }
        }
        else {
            last = s[i];
            count = 1;
        }
    }
    cout << "NO";
    return 0;
}
