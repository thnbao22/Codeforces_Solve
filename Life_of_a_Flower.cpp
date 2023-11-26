#include<iostream>
#include<vector>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int days; cin >> days;
		vector<int> a(days);
		for (int i = 0; i < days; ++i) {
			cin >> a[i];
		}
		int heigth = 1;
		bool alive = 1;
		for (int i = 0; i < days; ++i) {
			if (a[i] == 0 && i > 0 && a[i - 1] == 0) {
				alive = 0;
				break;
			}
			else if (a[i] == 1) {
				if (i > 0 && a[i - 1] == 1) {
					heigth += 5;
				}
				else {
					heigth++;	
				}
			}
		}
		if (!alive) {
			cout << -1 << endl;
		}
		else {
			cout << heigth << endl;
		}
	}
	return 0;
}