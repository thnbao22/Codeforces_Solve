#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/492/A
int main() {
	int n; cin >> n;
	int stones = 0, height = 0;
	while (stones <= n) {
		height++;
		stones += (height * (height + 1) / 2);
	}
	cout << height - 1;
	return 0;
}