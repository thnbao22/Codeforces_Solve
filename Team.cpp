#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/231/A
int main() {
	int test; cin >> test;
	int cnt(0);
	while (test--) {
		int a, b, c; cin >> a >> b >> c;
		if (a + b + c >= 2) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
