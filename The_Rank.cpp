#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int n; cin >> n;
	vector<int>a(n), b(n), c(n), d(n);
	int k = 1;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		cin >> b[i];
		cin >> c[i];
		cin >> d[i];
		int thomas_grades = a[0] + b[0] + c[0] + d[0];
		int sum_grades = a[i] + b[i] + c[i] + d[i];
		if (thomas_grades < sum_grades) {
			++k;
		}
	}
	cout << k;
	return 0;
}