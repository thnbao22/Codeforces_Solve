#include<iostream>
#include<string>
//https://codeforces.com/problemset/problem/1829/A
int main() {
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	std::string def = "codeforces";
	int testcase = 0; std::cin >> testcase;
	std::cin.ignore();
	while (testcase--) {
		std::string s; std::cin >> s;
		int countDiff = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (def[i] != s[i]) {
				++countDiff;
			}
		}
		std::cout << countDiff << "\n";
	}
	return 0;
}