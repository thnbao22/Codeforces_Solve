#include<iostream>
#include<string>
//https://codeforces.com/problemset/problem/75/A
std::string removeZero(std::string& str) {
	std::string res = "";
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] != '0') {
			res += str[i];
		}
	}
	return res;
}
int main() {
	int a = 0, b = 0;
	std::cin >> a >> b;
	int sum = a + b;
	std::string numa = std::to_string(a);
	std::string numb = std::to_string(b);
	std::string strsum = std::to_string(sum);
	numa = removeZero(numa);
	numb = removeZero(numb);
	strsum = removeZero(strsum);
	if (std::stoi(numa) + std::stoi(numb) == std::stoi(strsum)) {
		std::cout << "YES\n";
	}
	else {
		std::cout << "NO\n";
	}
	return 0;
}