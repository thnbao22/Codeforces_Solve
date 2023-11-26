#include<iostream>
#include<cmath>
using namespace std;
//https://codeforces.com/contest/1850/problem/A
int main() {
	int test; cin >> test;
	while (test--) {
		double a, b, c;
		cin >> a >> b >> c;
		double tong = max({ a + b, a + c, b + c });
		if (tong >= 10) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}