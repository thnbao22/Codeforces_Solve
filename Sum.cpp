#include<iostream>
#include<cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int test; cin >> test;
	while (test--) {
		short a, b, c; cin >> a >> b >> c;
		if (a + b == c || a + c == b || b + c == a) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}