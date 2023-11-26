#include<iostream>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		long long n; cin >> n;
		bool have_odd_divisor = false;
		while (n % 2 == 0) {
			n /= 2;
		}
		if (n > 1) {
			have_odd_divisor = true;
		}
		cout << (have_odd_divisor ? "YES" : "NO") << endl;
		
	}
	return 0;
}