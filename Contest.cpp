#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int misha_point = max(3 * a / 10, a - a / 250 * c);
	int vasya_point = max(3 * b / 10, b - b / 250 * d);
	if (misha_point > vasya_point) {
		cout << "Misha";
	}
	else if (misha_point < vasya_point) {
		cout << "Vasya";
	}
	else {
		cout << "Tie";
	}
	return 0;
}