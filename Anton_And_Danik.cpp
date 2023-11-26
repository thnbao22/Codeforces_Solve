#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/734/A
int main() {
	int n; cin >> n;
	int Anton_win = 0, Danik_win = 0;
	string s; cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == 'A') {
			Anton_win++;
		}
		else {
			Danik_win++;
		}
	}
	if (Anton_win > Danik_win) {
		cout << "Anton";
	}
	else if (Danik_win > Anton_win) {
		cout << "Danik";
	}else {
		cout << "Friendship";
	}
	return 0;
}