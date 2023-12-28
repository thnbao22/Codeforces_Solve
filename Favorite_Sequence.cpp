#include<iostream>
#include<vector>
//https://codeforces.com/problemset/problem/1462/A
int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	int testcases = 0; std::cin >> testcases;
	while (testcases--) {
		int n = 0; std::cin >> n;
		std::vector<int> v(n);
		for (int& x : v) std::cin >> x;
		std::vector<int> res;
		// two pointer Approach
		int i = 0, j = n - 1;
		while (i < j) {
			res.push_back(v[i]);
			res.push_back(v[j]);
			++i; --j;
		}
		if (n & 1) {
			res.push_back(v[i]);
		}
		for (const int& x : res) {
			std::cout << x << " ";
		}
		std::cout << "\n";
	}
	return 0;
}