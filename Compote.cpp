#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	/*
	int total = 0;
	if (a == 1 && b >= 2 && c >= 4) {
		cout << 7;
	}
	else {
		while (a>0) {
			if (a * 2 <= b && a * 4 <= c) 
			{
				total = (a + (a * 2) + (a* 4));
				break;
			}
			a--;
		}
		cout << total;
	}
	*/
	int min_product = min({ a, b / 2, c / 4 });
	cout << min_product + min_product * 2 + min_product * 4;
	return 0;
}