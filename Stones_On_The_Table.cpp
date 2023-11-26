#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/266/A
int main() {
	short n; cin >> n;
	string s; cin >> s;
	int step = 0;
	for (int i = 1; i < s.length(); ++i) {
		if (s[i] == s[i - 1]) {
			step++;
		}
	}
	cout << step;
	return 0;
}