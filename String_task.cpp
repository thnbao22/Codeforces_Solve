#include<string>
#include<iostream>
#include<algorithm>
//https://codeforces.com/problemset/problem/118/A
int main() {
	std::string str;
	getline(std::cin, str);
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
	std::string res;
	for (char& c : str) {
		if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
			res += '.';
			res += c;
		}
	}
	std::cout << res << std::endl;
	return 0;
}