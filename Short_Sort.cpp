#include<iostream>
#include<string>
//https://codeforces.com/problemset/problem/1873/A
int main() {
	int test = 0; std::cin >> test;
	while (test--) {
		std::string str;
		std::cin >> str;
		if (str == "abc" || str == "acb" || str == "bac" || str == "cba") {
			std::cout << "YES\n";
		}
		else {
			std::cout << "NO\n";
		}
	}
	return 0;
}