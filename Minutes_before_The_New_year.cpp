#include<iostream>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int hours, minutes; cin >> hours >> minutes;
		if (hours == 0) {
			cout << (24 * 60) - minutes << endl;
		}
		else {
			cout << (24 * 60) - (hours * 60 + minutes) << endl;
		}
	}
	return 0;
}
