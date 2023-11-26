#include <iostream>
#include <cmath>
using namespace std;
//https://codeforces.com/problemset/problem/263/A
int main() {
    int x, y;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int a;
            cin >> a;
            if (a == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - 3) + abs(y - 3) << endl;
    return 0;
}
