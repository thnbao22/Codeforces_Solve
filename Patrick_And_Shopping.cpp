#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int d1, d2, d3; cin >> d1 >> d2 >> d3;
	int res = min({ d1 + d3 + d2, 2 * (d1 + d2), 2 * (d2 + d3), 2 * (d1 + d3) });
	cout << res;
	return 0;
}