#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	/*
	if (n % 3 == 0) {
		if (n == 3) {
			cout << 1 << " " << 1 << " " << 1;
		}
		else {
			cout << (n / (n - 1)) << " " << (n / (n - 1)) << " " << (n - (2 * n) / (n - 1));
		}
	}
	else {
		if (n == 4) {
			cout << 1 << " " << 1 << " " << 2;
		}
		else {
			cout << (n / (n - 1)) << " " << (n % (n - 2)) << " " << (n - (n / (n - 1)) - (n % (n - 2)));
		}
	}
	*/
	int a = 1, b = 1, c = n - a - b;
	while (c % 3 == 0) {
		++a;
		--c;
	}
	cout << a << " " << b << " " << c;
	return 0;
}