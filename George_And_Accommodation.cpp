#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/467/A
int main() {
	int rooms; cin >> rooms;
	int count = 0;
	while (rooms--) {
		int q, p; cin >> q >> p;
		//q: số người trong phòng
		// p: số người mà phòng đó có thể chứa
		if (p - q >= 2 ) {
			count++;
		}
	}
	cout << count;
	return 0;
}