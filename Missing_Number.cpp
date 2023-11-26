#include<iostream>
//https://cses.fi/problemset/task/1083
int main() {
	long long n = 0; std::cin >> n;
	long long sum = 0;
	for (int i = 0; i < n -1; ++i) {
		long long x = 0;
		std::cin >> x;
		sum += x;
	}
	std::cout << n * (n + 1) / 2 - sum;
	return 0;
}