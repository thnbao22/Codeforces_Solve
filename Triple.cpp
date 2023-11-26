#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
//https://codeforces.com/problemset/problem/1669/B
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		unordered_map<int, int> ump;
		bool is_triple = false;
		for (int i = 0; i < n; ++i) {
			int x; cin >> x;
			ump[x]++;
		}
		for (unordered_map<int, int>::iterator it = ump.begin(); it != ump.end(); ++it){
			if (it->second >= 3) {
				is_triple = true;
				cout << it->first << "\n";
				break;
			}
		}
		if (!is_triple) {
			cout << -1 << "\n";
		}
	}
}