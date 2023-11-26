#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
//https://codeforces.com/problemset/problem/1352/A
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		vector<int> ans;
		int pos = 1;
		while (n > 0) {
			if (n % 10 > 0) {
				ans.push_back((n % 10) * pos);
			}
			n /= 10;
			pos *= 10;
		}
		cout << ans.size() << endl;
		for (auto x : ans) {
			cout << x << " ";
		}
	}
	return 0;
}