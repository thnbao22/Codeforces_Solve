#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/59/A
int main() {
	string s; cin >> s;
	int count_uppercase = 0, count_lowercase = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			count_lowercase++;
		}
		else {
			count_uppercase++;
		}
	}
	if (count_lowercase > count_uppercase || count_lowercase == count_uppercase) {
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] += 32;
			}
			cout << s[i];
		}
	}
	else {
		for (int i = 0; i < s.length(); ++i) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				s[i] -= 32;
			}
			cout << s[i];
		}
	}
	return 0;
}
