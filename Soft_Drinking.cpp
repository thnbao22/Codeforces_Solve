#include<iostream>
#include<cmath>
using namespace std;
//https://codeforces.com/problemset/problem/151/A
int main() {
	int n, k, l, c, d, p, nl, np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	cout << min({ (k * l) / nl, d * c, p / np }) / n;
	return 0;
}