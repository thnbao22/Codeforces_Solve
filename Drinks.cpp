#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/200/B
int main() {
	double n, total = 0; cin >> n;
	for (double i = 0; i < n; ++i) {
		int a; cin >> a;
		total += a * 1.0 / 100;
	}
	cout << total / n * 100;
	return 0;
}