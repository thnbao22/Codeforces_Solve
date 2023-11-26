#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		long long k;
		cin >> k;
		vector<int>a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int x = 2;
		int max_e = *max_element(a.begin(), a.end());
		while (x--) {
			for (int i = 0; i < n; ++i) {
				a[i] = max_e - a[i];
			}
		}
		if (k % 2 == 0) {
			for (auto x : a) {
				cout << x << " ";
			}
		}
		else {
			for (int i = 0; i < n; ++i) {
				a[i] = max_e - a[i];
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}