#include<iostream>
#include<utility>
#include <vector>
using namespace std;
//https://codeforces.com/problemset/problem/116/A
int main() {
	int n; cin >> n;
	vector<pair<int, int>> v(n);
	int max_cap = 0;
	int enter_pas = 0;
	for (int i = 0; i < n; ++i) {
		cin >> v[i].first >> v[i].second;
		enter_pas -= v[i].first;
		enter_pas += v[i].second;
		if (enter_pas > max_cap) {
			max_cap = enter_pas;
		}
	}
	cout << max_cap;

	return 0;
}