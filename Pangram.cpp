#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/520/A
int main() {
	int n; cin >> n;
	string s; cin >> s;
	bool is_pangram = true;
	for (char c = 'A'; c <= 'Z'; ++c) {
		if (s.find(c) == string::npos && s.find(c + 32) == string::npos) {
			is_pangram = false;
			break;
		}
	}
	if (!is_pangram) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	return 0;
}