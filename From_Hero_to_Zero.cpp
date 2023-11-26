#include<iostream>
using namespace std;
//https://codeforces.com/problemset/problem/1175/A
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();
	int test; cin >> test;
	while (test--) {
		long long n, k; cin >> n >> k;
		long long step = 0;
		while (n != 0) {
			if (n % k == 0) {
				step++;
				n /= k;
			}
			else {
				step += (n % k);// thay vì phải giảm n
				// ta sẽ tìm cách tính sao đưa n về số có thể chia hết k
				// ví dụ 11 không chia hết cho 3 nhưng khi chia dư
				// 11 % 3 = 2 và 11 - 2 = 9 và 9 là số chia hết cho 3
				// -> số step += (n % k) chính là số bước cần thực hiện để đưa n về số chia hết cho 3
				// thay vì phải giảm 1 đơn vị sau mỗi lần lặp
				n -= (n % k);
			}
		}
		cout << step << endl;
	}
	
	return 0;
}
