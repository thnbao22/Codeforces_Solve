#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/811/A
int main() {
    int a, b; cin >> a >> b;
    int candy = 1;
    while (true) {
        if (a < candy) {
            cout << "Vladik";
            break;
        }
        a -= candy;
        candy++;
        if (b < candy) {
            cout << "Valera";
            break;
        }
        b -= candy;
        candy++;
    }
    return 0;
}
