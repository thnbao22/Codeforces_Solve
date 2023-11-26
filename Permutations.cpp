#include<iostream>
//https://cses.fi/problemset/task/1070
int main() {
	int n = 0; std::cin >> n;
	if (n == 1) {
		std::cout << n;
		return 0;
	}
	else if (n == 2 || n == 3) {
		std::cout << "NO SOLUTION";
		return 0;
	}
	else {
		for (int i = 2; i <= n; i += 2) {
			std::cout << i << " ";
		}
		for (int i = 1; i <= n; i += 2) {
			std::cout << i << " ";
		}
	}
	return 0;
}