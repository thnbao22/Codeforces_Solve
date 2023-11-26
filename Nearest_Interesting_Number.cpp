#include<iostream>
using namespace std;

int sum_digit(int n) {
	int sum(0);
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
	int a; cin >> a;
	while (sum_digit(a) % 4 != 0) {
		a++;
	}
	cout << a;
	return 0;
}