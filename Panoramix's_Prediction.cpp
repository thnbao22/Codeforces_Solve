#include<iostream>
#include<cmath>
using namespace std;
//https://codeforces.com/problemset/problem/80/A
bool isprime(int n) {
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int isnextPrime(int n) {
	n+=1;
	while (!isprime(n)) {
		n++;
	}
	return n;
}
int main() {
	int n, m; cin >> n >> m;
	if (!isprime(m)) {
		cout << "NO";
	}
	else if (m != isnextPrime(n)) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	return 0;
}