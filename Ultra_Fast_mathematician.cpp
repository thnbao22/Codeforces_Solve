#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/61/A
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a, b; cin >> a >> b;
	for (int i = 0; i < a.length(); ++i) {
		cout << ((a[i] - '0') ^ (b[i] - '0'));
	}
	return 0;
}