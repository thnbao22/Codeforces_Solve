#include<iostream>
//https://cses.fi/problemset/task/1068
int main() {
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);
	long long  n = 0; std::cin >> n;
	std::cout << n << " ";
	while (n != 1) {
		if (n & 1) {
			n = (n * 3) + 1;
			std::cout << n << " ";
		}
		else {
			n /= 2;
			std::cout << n << " ";
		}
	}
	return 0;
}