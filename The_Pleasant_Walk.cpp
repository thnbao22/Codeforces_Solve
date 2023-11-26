#include<iostream>
#include<vector>
//https://codeforces.com/problemset/problem/1090/M
int main() {
	int n = 0, k = 0; std::cin >> n >> k;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> v[i];
	}
	int res = 1, len = 1;
	for (int i = 1; i < n; ++i) {
		if (v[i] != v[i - 1]) {
			++len;
		}
		else {
			len = 1;
		}
		res = std::max(len, res);
	}
	std::cout << res;
	return 0;
}