#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/486/A
int main() {
	long long n; cin >> n;
	if (n & 1) {
		cout << - (n +1) / 2;
	}
	else {
		cout << n / 2;
	}
	return 0;
}