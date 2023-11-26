#include<iostream>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int f0, f1, n; cin >> f0 >> f1 >> n;
		if ( n % 3 == 0 ) {
			cout << f0 << endl;
		}
		else if (n % 3 == 1) {
			cout << f1 << endl;
		}
		else {
			cout << (f0 ^ f1) << endl;
		}
	}
	return 0;
}