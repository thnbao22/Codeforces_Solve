#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; ++i) {
		a[i] = new int[n];
	}
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> a[i][j];
			if (i == j || i == n - j - 1 || i == n / 2 || j == n / 2) {
				sum += a[i][j];
			}
		}
	}
	cout << sum << endl;
	for (int i = 0; i < n; ++i) {
		delete[] a[i];
	}
	delete[] a;
	return 0;
}