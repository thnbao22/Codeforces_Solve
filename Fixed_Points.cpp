#include<iostream>
#include<vector>
//https://codeforces.com/problemset/problem/347/B
int main() {
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);
	int n = 0; std::cin >> n;
	int fixedPoints = 0;
	std::vector<int> v(n);
	int index = 0;
	for (int i = 0; i < n; ++i) {
		std::cin >> v[i];
		if (v[i] == i) {
			++fixedPoints;
			index = i;
		}
	}
	for (int i = index; i < n; ++i) {
		if (v[i] != i && v[v[i]] == i) {
			fixedPoints += 2;
			std::cout << fixedPoints;
			return 0;
		}
	}
	if (fixedPoints < n) {
		++fixedPoints;
	}
	std::cout << fixedPoints;
	return 0;
}