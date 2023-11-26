#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, k; cin >> n >> k;
	vector<int> f(n), t(n);
	vector<int> max_joy(n);
	for (int i = 0; i < n; ++i) {
		cin >> f[i] >> t[i];
		if (t[i] >= k) {
			max_joy[i] = f[i] - (t[i] - k);
		}
		else {
			max_joy[i] = f[i];
		}
	}
	cout << *max_element(max_joy.begin(), max_joy.end());
	return 0;
}