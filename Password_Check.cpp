#include<iostream>
#include<string>
using namespace std;
//97 -> 122: a->z
//65 -> 90: A->Z
//https://codeforces.com/problemset/problem/411/A
int main() {
	string str;
	getline(cin, str);
	if (str.length() < 5) {
		cout << "Too weak";
		return 0;
	}
	bool hasLower = false, hasUpper = false, hasDigit = false;
	for (char c : str) {
		if (islower(c)) {
			hasLower = true;
		}
		else if (isupper(c)) {
			hasUpper = true;
		}
		else if (isdigit(c)) {
			hasDigit = true;
		}
	}
	if (!hasDigit || !hasLower || !hasUpper) {
		cout << "Too weak";
	}
	else {
		cout << "Correct";
	}
	return 0;
}