#include<iostream>
#include<unordered_set>
using namespace std;
//https://codeforces.com/problemset/problem/228/A
int main() {
	unordered_set<int> uds;
	for (int i = 0; i < 4; ++i) {
		int x; cin >> x;
		uds.insert(x);
	}
	cout << 4 - uds.size();
	return 0;
}