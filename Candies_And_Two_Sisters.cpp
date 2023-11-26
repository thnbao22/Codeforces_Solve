#include<iostream>
#include<cmath>
using namespace std;
//https://codeforces.com/problemset/problem/1335/A
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		if (n <= 2) {
			cout << 0 << endl;
		}
		else {
			cout << (n -1) / 2 << endl;
		}
	}

	return 0;
}