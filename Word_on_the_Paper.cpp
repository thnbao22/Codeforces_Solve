#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/contest/1850/problem/C?fbclid=IwAR0N7V6AN3BpK19cn66q8tHuPhEDEBBfiW3IhByDOgJGqutUR3EnRqtWNH0
int main() {
	int test; cin >> test;
	cin.ignore();
	while (test--) {
		char grid[8][8];
		string word = "";
		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				cin >> grid[i][j];
				if (grid[i][j] != '.') {
					word += grid[i][j];
				}
			}
		}
		cout << word << endl;
	}
	return 0;
}