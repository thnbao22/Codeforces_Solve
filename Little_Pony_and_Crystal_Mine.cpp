#include<iostream>
#include<vector>
#include<cmath>
//https://codeforces.com/problemset/problem/454/A
int main() {
	int n = 0; std::cin >> n;
	std::vector<std::vector<char>> v(n, std::vector<char>(n, '*'));
	int mid = n / 2;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (abs(i - mid) + abs(j - mid) <= n / 2) {
				v[i][j] = 'D';
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << v[i][j];
		}
		std::cout << "\n";
	}
	return 0;
}