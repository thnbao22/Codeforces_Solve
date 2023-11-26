#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int test; cin >> test;
	while (test--) {
		vector<int> a(3);
		for (int i = 0; i < 3; ++i) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		cout << a[1] << endl;
	}
	return 0;
}