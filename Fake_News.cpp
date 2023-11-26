#include<iostream>
#include<string>
//https://codeforces.com/problemset/problem/802/G
using namespace std;
bool containsHeidi(string s) {
	string heidi = "heidi";
	int j = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == heidi[j]) {
			j++;
		}
		if (j == heidi.length()) {
			return true;
		}
	}
	return false;
}
int main() {
	string str; getline(cin, str);
	if (containsHeidi(str)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
