#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/71/A
int main() {
	int test; cin >> test;
	cin.ignore();
	while (test--) {
		string str; cin >> str;
		if (str.length() <= 10) {
			cout << str << "\n";
		}
		else {
			cout << str[0] << str.length() - 2 << str[str.length() - 1] << "\n";
		}
	}
	return 0;
}