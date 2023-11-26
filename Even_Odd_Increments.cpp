#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int test; cin >> test;
	while (test--) {
		int n, q; cin >> n >> q;
		vector<long long> a;
		long long sum_even = 0, sum_odd = 0, chan = 0, le = 0;
		for (int i = 0; i < n; ++i) {
			long long z; cin >> z;
			a.push_back(z);
		}
		while (q--) {
			int type, x; cin >> type >> x;
			long long sum = 0;
			if (type == 0) {
				//bởi vì nếu n là số chẵn thì số lượng số chẵn sẽ là  n /2
				// n /2 + 1 nếu n là số lẻ
				// vậy chính sác hơn thì (n / 2 + n % 2) tức là 1 trong 2 trường hợp
				// vì nếu n là số chẵn thì n % 2 == 0 tức là chỉ còn n/2
				for (int i = 0; i < n; ++i) {
					if (a[i] % 2 == 0) {
						a[i] += x;
					}
					sum += a[i];
				}
				cout << sum << endl;
			}
			else {
				for (int i = 0; i < n; ++i) {
					if (a[i] % 2 != 0) {
						a[i] += x;
					}
					sum += a[i];
				}
				cout << sum << endl;
			}
		}
	}
	return 0;
}