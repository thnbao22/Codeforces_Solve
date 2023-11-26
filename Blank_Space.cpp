#include<iostream>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		int* a = new int[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int current_length = 0;
		int max_length = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] == 0) {
				current_length++;
			}
			else {
				max_length = max(current_length, max_length);
				current_length = 0;
			}
		}
		cout << max(max_length, current_length) << endl;
		delete[] a;
	}
	return 0;
}