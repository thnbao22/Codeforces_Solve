#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int n, k; cin >> n >> k;
	// solution: O(1)
	if (n % k == 0) {
		cout << (n * k + k);
	}
	else {
		cout << (n + k) - (n % k);
	}
	return 0;
}