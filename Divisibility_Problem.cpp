#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/1328/A
int main() {
	int test; cin >> test; 
	while (test--) {
		int a, b; cin >> a >> b;
		int move = (b - a % b) % b;
		cout << move << endl;
		
	}
	return 0;
}