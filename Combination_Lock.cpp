#include<string>
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	string s, s1;
	cin >> s >> s1;
	int minimum_moves = 0;
	for (int i = 0; i < s.length(); ++i) {
		int a = s[i] - '0';// chuyển kiểu kí tự sang số
		int b = s1[i] - '0';
		minimum_moves += min(abs(a - b), 10 - abs(a - b));
	}
	cout << minimum_moves;
	return 0;
}