#include<string>
#include<iostream>
//https://codeforces.com/problemset/problem/1139/A
int main() {
	int n = 0; std::cin >> n;
	std::cin.ignore();
	std::string str;
	getline(std::cin, str);
	int even_substr = 0;
	for (int i = 0; i < n; ++i) {
		if ((str[i] - '0') % 2 == 0) {
			even_substr += (i + 1);
		}
	}
	std::cout << even_substr;
	return 0;
}