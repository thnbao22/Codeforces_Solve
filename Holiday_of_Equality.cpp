#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int n; cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int max_burles = *max_element(a, a + n);
	int spend(0);
	for (int i = 0; i < n; ++i) {
		if (a[i] < max_burles) {
			spend += (max_burles - a[i]);
		}
	}
	cout << spend;
	return 0;
}