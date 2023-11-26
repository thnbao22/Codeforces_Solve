#include<iostream>
using namespace std;

/*
* Composite Numbers
- là  những con số lớn hơn 1 mà không phải là số nguyên tố
--> Nói cách khác số đó có thể biểu diễn được dưới dạng tích các thừa số nguyên tố: 2, 3, 5,...
---> n là 4, 6,8, 9,...
kiểm tra xem n - 4 n -6 n - 9 có phải là số hợp hay không
*/
//https://codeforces.com/problemset/problem/1154/A
bool is_Composite_Number(int n) {
	if (n < 2)  return 0;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return 1;
		}
	}
	return 0;
}
int main() {
	int n;
	cin >> n;
	if (is_Composite_Number(n - 4)) {
		cout << 4 << " " << n - 4 << endl;
	}
	else if (is_Composite_Number(n - 6)) {
		cout << 6 << " " << n - 6 << endl;
	}
	else {
		cout << 9 << " " << n - 9 << endl;
	}
	return 0;
}