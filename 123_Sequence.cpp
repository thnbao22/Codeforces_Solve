#include<iostream>
#include<vector>
#include<algorithm>
//https://codeforces.com/problemset/problem/52/A
int main() {
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);
	int n = 0; std::cin >> n;
	std::vector<int> f(4, 0);
	for (int i = 0; i < n; ++i) {
		int x = 0;
		std::cin >> x;
		f[x]++;
	}
	std::cout << n - *std::max_element(f.begin(), f.end());
	return 0;
}