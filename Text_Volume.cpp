#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
//https://codeforces.com/problemset/problem/837/A
int main() {
	int n = 0; std::cin >> n;
	std::cin.ignore();
	std::string str;
	getline(std::cin, str);
	std::stringstream ss(str);
	std::string word;
	int max_vol = 0;
	while (ss >> word) {
		int vol = std::count_if(word.begin(), word.end(), ::isupper);
		max_vol = std::max(max_vol, vol);
	}
	std::cout << max_vol;
	return 0;
}