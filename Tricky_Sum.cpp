#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		long long n; cin >> n;
		long long sum = (n * (n + 1) / 2);
		for (long long i = 1; i <= n; i *= 2) {
			sum -= (2 * i);
		}
		cout << sum << endl;
	}
	return 0;
}