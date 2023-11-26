#include<iostream>
#include<cmath>
//https://codeforces.com/problemset/problem/26/A
bool prime(int n) {
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return 0;
		}
	}
	return true;
}
bool AlmostPrime(int n) {
	int dem = 0;
	for (int i = 1; i < n; ++i) {
		if (prime(i) && n % i == 0) {
			dem++;
		}
	}
	if (dem == 2) {
		return true;
	}
	return false;
}
int main() {
	int n = 0; std::cin >> n;
	int res = 0;
	for (int i = 1; i < n + 1; ++i) {
		if (AlmostPrime(i)) {
			res++;
		}
	}
	std::cout << res;
	return 0;
}