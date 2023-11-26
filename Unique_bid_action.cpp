#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*
* Ý tưởng
* tạo 2 vector trong đó 1 vector chứa số lượng người chơi
* và 1 vector chứa số điểm người chơi đó
* tạo một biến ans = -1 để gán kết quả của người chiến thắng
* và chúng ta sẽ dùng vector cnt để đếm đánh dấu tần suất xuất hiện của điểm mà người chơi đạt được
* sau đó ta sẽ duyệt vector nếu cnt[i] == 1 tức là số điểm đó có xuất hiện trong các số điểm của người chơi
* và ta
*/
int main() {
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		vector<int> a(n);
		vector<int> cnt(n + 1);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			cnt[a[i]]++;
		}
		int ans = -1;
		if (n <= 1) {
			cout << 1 << endl;
		}
		else {
			for (int i = 0; i < n; ++i) {
				if (cnt[a[i]] == 1) { // tức là điểm đó có xuất hiện
					if (ans == -1 || a[i] < a[ans]) {
						ans = i;
					}
				}
			}
			if (ans != -1) {
				ans++;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
