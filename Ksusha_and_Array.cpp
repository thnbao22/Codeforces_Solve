#include<iostream>
#include<vector>
#include<algorithm>
//https://codeforces.com/problemset/problem/299/A
int solve(const std::vector<int>& v) {
	int res = *std::min_element(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] % res != 0) {
			return -1;
		}
	}
	return res;
}

int main() {
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0); std::cin.tie(0);
	int n = 0; std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> v[i];
	}
	std::cout << solve(v);
	return 0;
}