#include<iostream>
#include<vector>
using namespace std;
bool lucky_Number(int n, int k) {
	int count = 0;
	while (n > 0) {
		int x = n % 10;
		if (x == 4 || x == 7) {
			count++;
		}
		n /= 10;
	}
	if (count > k) {
		return 0;
	}
	else {
		return 1;
	}
}
int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	int lucky = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (lucky_Number(a[i], k) == 1) {
			lucky++;
		}
	}
	cout << lucky;
	return 0;
}