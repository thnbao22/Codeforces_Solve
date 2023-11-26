#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n;
    for (int i = 0; i < n - 1; i++) {
        if ((s[i] == 'R' && s[i + 1] == 'U') || (s[i] == 'U' && s[i + 1] ==  'R')) {
            ans--;
            i++; // nếu là UR hoặc RU thì độ dài giảm đi 1
            // tăng i lên để tránh duyệt các cặp tiếp theo vì trùng lặp do 2 TH RR hoặc RU
        }
    }
    cout << ans << endl;
    return 0;
}