#include<iostream>
#include<string>
#include<unordered_set>
//https://codeforces.com/problemset/problem/236/A
using namespace std;
int main() {
	string str; cin >> str;
	unordered_set<char> distinct_char;
	for (int i = 0; i < str.length(); ++i) {
		distinct_char.insert(str[i]);
	}
	int num_char = distinct_char.size();
	if (num_char % 2 != 0) {
		cout << "IGNORE HIM!\n";
	}
	else {
		cout << "CHAT WITH HER!\n";
	}
	return 0;
}