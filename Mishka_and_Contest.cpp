#include<iostream>
#include<vector>
//https://codeforces.com/problemset/problem/999/A
// Idea: tim doan [i, j] ma tai do i voi j la toa do co phan tu lon hon k
int main() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> v[i];
	}
	int i = 0, j = n - 1;
	while (i <= j && (v[i] <= k || v[j] <= k)) {
		if (v[i] <= k) {
			++i;
		}
		else if (v[j] <= k) {
			--j;
		}
	}
	std::cout << n - (j - i + 1);
}