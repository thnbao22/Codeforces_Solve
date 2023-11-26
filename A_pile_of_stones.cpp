#include<iostream>
#include<string>
using namespace std;

int main() {
	int times; cin >> times;
	string operations; cin >> operations;
	int stones = 0;
	for (int i = 0; i < operations.length(); ++i) {
		if (operations[i] == '-') {
			if (stones != 0) {
			stones--;
			}
		}
		else {
			stones++;
		}
	}
	if (stones < 0) {
		cout << 0;
	}
	else {
		cout << stones;
	}
	return 0;
}