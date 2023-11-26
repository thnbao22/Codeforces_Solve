#include<iostream>
#include<vector>
#include<algorithm>
//https://codeforces.com/problemset/problem/22/A
int main() {
	int n; std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> v[i];
	}
	std::sort(v.begin(), v.end());
	auto it = std::upper_bound(v.begin(), v.end(), v[0]);
	if (it != v.end()) {
		std::cout << *it << "\n";
	}
	else {
		std::cout << "NO\n";
	}
	return 0;
}