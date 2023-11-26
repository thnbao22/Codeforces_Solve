#include<iostream>
#include<string>
using namespace std;


int main() {
	int test; cin >> test;
	while (test--) {
		int tong(0);
		string s; cin >> s;
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] >= '0' && s[i] <= '9') {
				tong += (s[i] - '0');
			}
		}
		cout << tong << endl;
	}
	return 0;
}