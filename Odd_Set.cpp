#include<iostream>
#include<cmath>
#include <vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(2 * n);
		for (int i = 0; i < 2 * n; ++i) {
			cin >> a[i];
		}
		int count_odd = 0;
		for (int i = 0; i < 2 * n; ++i) {
			if (a[i] % 2 != 0) {
				count_odd++;
			}
		}
		int count_even = 2 * n - count_odd;
		if (count_odd > count_even || count_even > count_odd) {
			cout << "NO\n";
		}
		else if (count_odd == count_even) {
			cout << "YES\n";
		}
	}
	return 0;
}