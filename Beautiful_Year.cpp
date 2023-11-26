#include<iostream>
#include<unordered_set>
using namespace std;
//https://codeforces.com/problemset/problem/271/A
bool distinctDigit(int year) {
	unordered_set<int> digit;
	while (year > 0) {
		int digits = year % 10;
		if (digit.find(digits) != digit.end()) {
			return false;
		}
		digit.insert(digits);
		year /= 10;
	}
	return true;
}

int DistinctYear(int year) {
	year++;
	while (!distinctDigit(year)) {
		year++;
	}
	return year;
}

int main() {
	int year; cin >> year;
	cout << DistinctYear(year);
	return 0;
}