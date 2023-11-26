#include<iostream>
#include<vector>
using namespace std;
//https://codeforces.com/problemset/problem/677/A
int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	int valid_width = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] <= k) {
			a[i] = 1;
			valid_width += a[i];
		}
		else {
			a[i] = 2;
			valid_width += a[i];
		}
	}
	cout << valid_width;
	
	return 0;
}