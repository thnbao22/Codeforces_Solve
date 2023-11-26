#include<iostream>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int a; cin >> a;
		int count(0);
		for (int i = 0; i < 3; ++i) {
			int b;
			cin >> b;
			if (b > a) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}