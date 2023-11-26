#include<iostream>
#include<string>
using namespace std;
// A -> Z : 65 -> 90
// a -> z: 97 -> 122
//https://codeforces.com/problemset/problem/112/A
string upper(string &s) {
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] <= 90 && s[i] >= 65) {
			s[i] += 32;
		}
	}
	return s;
}
int main() {
	string a, b; cin >> a >> b;
	string c = upper(a);
	string d = upper(b);
	if (c > d) {
		cout << 1 << endl;
	}
	else if (c < d) {
		cout << -1 << endl;
	}
	else {
		cout << 0 << endl;
	}
	return 0;
}