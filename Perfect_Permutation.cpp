#include<iostream>

//https://codeforces.com/problemset/problem/233/A
void solvePerfectPermutation(int num) {
	if (num & 1) {
		std::cout << -1;
	}
	else {
		for (int i = 1; i < num + 1; i += 2) {
			std::cout << i + 1 << " " << i << " ";
		}
	}
}
int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	int n = 0; std::cin >> n;
	solvePerfectPermutation(n);
	return 0;
}