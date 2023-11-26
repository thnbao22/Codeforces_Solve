#include <iostream>
#include <string>
using namespace std;
//https://codeforces.com/problemset/problem/1303/A
int main() {
    int test; cin >> test;
    cin.ignore();
    while (test--) {
        string str; cin >> str;
        int first = -1, last = -1;
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '1') {
                // tìm phần tử trong chuỗi đầu tiên có giá trị = 1
                // gán cho first
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }
        int ans = 0;
        for (int i = first+1; i < last; ++i) {
            if (str[i] == '0') {
                ans++;
            }
        }
        cout << ans << "\n";
            
    }
    return 0;
}
