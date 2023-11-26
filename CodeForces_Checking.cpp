#include<iostream>
#include<string>
using namespace std;

int main() {
	int test; cin >> test;
	string s = "codefores";
	while (test--) {
		char c; cin >> c;
		bool flag = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (c == s[i]) {
				flag = true;
				break;
			}
		}
		if (flag == true) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}