#include<iostream>
#include<string>
using namespace std;

int main() {
	int n; cin >> n;
	string num; cin >> num;
	int sum_first = 0, sum_last = 0;
	for (int i = 0; i < n; ++i) {
		if (!(num[i] == '4' || num[i] == '7')) {
			cout << "NO\n";
			return 0;
		}
		if (i < n / 2) {
			sum_first += (num[i] - '0');
		}
		else {
			sum_last += (num[i] - '0');
		}
	}
	if (sum_first == sum_last) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}