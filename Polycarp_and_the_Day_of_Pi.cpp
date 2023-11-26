#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/1790/A
int main() {
	int test; cin >> test;
	string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
	cin.ignore();
	while (test--) {
		string s;
		getline(cin, s);
		int i = 0;
		while (pi[i] == s[i] && i < s.size() && i < pi.size()) {
			i++;
		}
		cout << i << "\n";
	}
	return 0;
}