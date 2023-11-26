#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		long long s, a, b, c; cin >> s >> a >> b >> c;
		long long ans = (s / c) + (s / c / a) * b;
		// s/c chính là giá tiền của một thanh chocolate 
		// (s/c/a) * b lại chính là số additional bars bạn có thể lấy
		cout << ans << endl;
	}
	return 0;
}