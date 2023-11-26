#include<iostream>
#include<cmath>
using namespace std;
 
int ucln(int a, int b) {
	int uc = 1;
	for (int i = min(a, b); i >= 1; --i) {
		if (a % i == 0 && b % i == 0) {
			 uc = i;
			 break;
		}
	}
	return uc;
}
int main() {
	int a, b, n; cin >> a >> b >> n;
	bool simon_turn = 1;
	while (n > 0) {
		if (simon_turn == 1) {
			n -= ucln(a, n);
			simon_turn = 0;
		}
		else {
			n -= ucln(b, n);
			simon_turn = 1;
		}
	}
	if (simon_turn == 1) {
		cout << "1";
	}
	else {
		cout << "0";
	}
	return 0;
}