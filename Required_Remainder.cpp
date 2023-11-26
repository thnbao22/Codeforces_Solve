#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int x, y, n; cin >> x >> y >> n;
		if (n % x == y) {
			cout << n << endl;
		}
		else if (n % x > y) {
			cout << n - (n % x - y) << endl;
		}
		else {
			cout << n - (n % x + x - y) << endl;
		}
	}
	return 0;
}