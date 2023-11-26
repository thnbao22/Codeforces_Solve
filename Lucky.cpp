#include<iostream>
#include<string>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		string s; cin >> s;
		int first_half = s[0] - 0 + s[1] - 0 + s[2] - 0;
		int second_half = s[3]- 0 + s[4] - 0 + s[5] - 0;
		if (first_half == second_half) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}