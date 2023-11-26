#include<iostream>
#include<vector>
//https://codeforces.com/problemset/problem/888/A
int main() {
	int n = 0; std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> v[i];
	}
	int res = 0;
	for (int i = 1; i < v.size() - 1; ++i) {
		if ((v[i] > v[i - 1] && v[i] > v[i + 1]) || (v[i] < v[i - 1] && v[i] < v[i + 1])) {
			++res;
		}
	}
	std::cout << res;
	return 0;
}