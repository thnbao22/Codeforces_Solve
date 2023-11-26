#include<iostream>
#include<vector>
//https://codeforces.com/problemset/problem/1206/A
void solve(const std::vector<int> &v1, const std::vector<int>& v2, int n, int m) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			int sum = v1[i] + v2[j];
			auto it1 = std::find(v1.begin(), v1.end(), sum);
			auto it2 = std::find(v2.begin(), v2.end(), sum);
			if (it1 == v1.end() && it2 == v2.end()) {
				std::cout << v1[i] << " " << v2[j];
				return;
			}
		}
	}
}
int main() {
	std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0);
	int n = 0, m = 0;
	std::cin >> n;
	std::vector<int> v1(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> v1[i];
	}
	std::cin >> m;
	std::vector<int> v2(m);
	for (int j = 0; j < m; ++j) {
		std::cin >> v2[j];
	}
	solve(v1, v2, n, m);
	return 0;
}