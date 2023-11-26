#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	if (n >= 0 && n <= 5) {
		cout << n - n;
	}
	else if (n > 5 && n <= 9) {
		cout << 10;
	}
	else if (n % 10 > 5){
		cout << n + (10 - (n% 10));
	}
	else {
		cout << n - (n % 10);
	}
	return 0;
}