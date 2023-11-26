#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/281/A
int main() {
	string s; cin >> s;
	if (s[0] >= 'a' && s[0] <= 'z') {
		s[0] -= 32;
	}
	cout << s;
	return 0;
}