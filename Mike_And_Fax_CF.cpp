#include<iostream>
#include<string>
//https://codeforces.com/problemset/problem/548/A
bool FullPanlindrome(const std::string& s, int n) {
	int len = s.length() / n;
	for (int i = 0; i < s.length(); i += len) {
		std::string temp = s.substr(i, len);
		for (int j = 0; j < temp.length() / 2; ++j) {
			if (temp[j] != temp[temp.length() - j - 1]) {
				return false;
			}
		}
	}
	return true;
}
int main() {
	std::string message; int n = 0;
	std::cin >> message >> n;
	if (message.length() % n != 0) {
		std::cout << "NO";
	}
	else {
		if (FullPanlindrome(message, n)) {
			std::cout << "YES";
		}
		else {
			std::cout << "NO";
		}
	}
	return 0;
}