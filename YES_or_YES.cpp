#include<iostream>
#include<string>
#include<algorithm>
//https://codeforces.com/problemset/problem/1703/A
bool solve(std::string s) {
	if (s.length() != 3) {
		return false;
	}
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	if (s == "yes") {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int testcase = 0; std::cin >> testcase;
	std::cin.ignore();
	while (testcase--) {
		std::string s;
		std::cin >> s;
		if (solve(s)) {
			std::cout << "YES\n";
		}
		else {
			std::cout << "NO\n";
		}
	}
	return 0;
}