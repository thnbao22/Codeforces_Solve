#include<iostream>
//https://cses.fi/problemset/task/1069
int main() {
	std::string str; std::cin >> str;
	char s = 'A';
	int m = 0, c = 0;
	for (char ch : str) {
		if (s == ch) {
			c++;
			m = std::max(c, m);
		}
		else {
			s = ch;
			c = 1;
		}
	}
	std::cout << m;
	return 0;
}