#include<iostream>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	char** a = new char* [n];
	for (int i = 0; i < n; ++i) {
		a[i] = new char[m];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
	bool flag = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y') {
				flag = 1;
			}
		}
	}
	if (flag == 1) {
		cout << "#Color";
	}
	else {
		cout << "#Black&White";
	}
	return 0;
}