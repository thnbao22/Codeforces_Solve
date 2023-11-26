#include<iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int sum_of_initial_prices(0);
		for (int i = 0; i < n; ++i) {
			int a; cin >> a;
			sum_of_initial_prices += a;
		}
		cout << (long long)ceil((double)sum_of_initial_prices / n) << endl;
	}

	return 0;
}