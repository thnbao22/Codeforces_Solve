#include<iostream>
#include<algorithm>
using namespace std;
//https://codeforces.com/problemset/problem/136/A
int main() {
	int n; cin >> n;
	int* a = new int[n+1];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (a[j] == i) { // a friend number i gave a gift to a friend number a[i]
				// tức là a[j] = i
				cout << j << " ";
				break;
			}
		}
	}
	delete[] a;
	return 0;
}