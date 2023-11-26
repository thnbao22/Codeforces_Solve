#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
//https://codeforces.com/problemset/problem/1535/A
int main() {
	int test; cin >> test;
	while (test--) {
		int s1, s2, s3, s4;
		cin >> s1 >> s2 >> s3 >> s4;
		vector<int> v = { s1, s2, s3, s4 };
		sort(v.begin(), v.end());
		int high_2 = v[v.size() - 2];
		if (high_2 == min(s1, s2) || high_2 == min(s3, s4)) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
	return 0;
}