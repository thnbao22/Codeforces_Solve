#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//https://codeforces.com/problemset/problem/1003/A
int main() {
	int n; cin >> n;
	vector<int> v(101, 0);
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		v[x]++;
	}
	cout << *max_element(v.begin(), v.end());
	return 0;
}
