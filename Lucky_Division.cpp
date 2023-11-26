#include<iostream>
//https://codeforces.com/problemset/problem/122/A
bool almostLucky(int num) {
	while (num > 0) {
		int x = num % 10;
		if (x != 4 && x != 7) {
			return false;
		}
		num /= 10;
	}
	return 1;
}
int main() {
	int num = 0; std::cin >> num;
	if (num % 4 == 0 || num % 7 == 0 || num % 47 == 0) {
		std::cout << "YES\n";
	}
	else {
		if (almostLucky(num)) {
			std::cout << "YES\n";
		}
		else {
			std::cout << "NO\n";
		}
	}
	return 0;
}