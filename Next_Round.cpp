#include<iostream>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int cnt = 0;
	if (n == 1) {
		cout << 0;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (a[i] >= a[k - 1] && a[i] > 0) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	delete[] a;
	return 0;
}