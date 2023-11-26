#include<iostream>
#include<algorithm>
using namespace std;
//https://codeforces.com/problemset/problem/1154/A
int main() {
	int a[4];
	for (int i = 0; i < 4; ++i) {
		cin >> a[i];
	}
	sort(a, a + 4);
	cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2];
	return 0;
}