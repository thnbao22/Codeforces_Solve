#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/977/A
int main() {
	string num; cin >> num;
	int cnt(0);
	for (int i = 0; i < num.length(); ++i) {
		if (num[i] == '4' || num[i] == '7') {
			cnt++;
		}
	}
	if (cnt == 4 || cnt == 7) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}