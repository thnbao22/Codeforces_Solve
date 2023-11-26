#include<iostream>
using namespace std;

int main() {
	long long n, x, y; cin >> n >> x >> y;
	long long black_pos = n + n;
	if (x + y > n + 1) {
		cout << "Black";
	}else{
		cout << "White";
	}	
	return 0;
