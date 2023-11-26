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
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int phan_tu_max = *max_element(a.begin(), a.end());
		int phan_tu_min = *min_element(a.begin(), a.end());
		cout << phan_tu_max - phan_tu_min << endl;
	}
	return 0;
}