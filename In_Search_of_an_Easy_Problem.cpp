#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/1030/A
int main() {
	int num_of_people; cin >> num_of_people;
	int tong = 0;
	bool is_hard = false;
	while (num_of_people--) {
		int a; cin >> a;
		if (a == 1) {
			is_hard = true;
		}
	}
	if (is_hard) {
		cout << "HARD";
	}
	else {
		cout << "EASY";
	}
	return 0;
}