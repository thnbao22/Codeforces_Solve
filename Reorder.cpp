#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, m; cin >> n >> m;
		int sum(0);
		for (int i = 0; i < n; ++i) {
			int a; cin >> a;
			sum += a;
		}
		if (sum == m) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
		
	}
	return 0;
}