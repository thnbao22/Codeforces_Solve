#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		vector<int> a(n);
		int sum = 0, zeros = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			sum += a[i];
			if (a[i] == 0) {
				zeros++;
			}
		}
		int step = zeros;
		sum += zeros;
		if (sum == 0) step++;
		cout << step << endl;
	}
	return 0;
}
/*
* Mẹo: đếm số lượng số 0 có trong mảng nhập vào
vì sẽ có trường hợp
TH1: Tổng bằng 0 và có n số 0 trong mảng đó thì sẽ có n bước để giúp tông mảng không bằng 0
TH2: Tổng bằng 0 và không có con số 0 nào trong đó hết vậy sẽ gán step = zeros tức là số lượng chữ số 0 và kiểm tra nếu tổng bằng 0 thì tăng step lên 1 lần
--> Vì tổng bằng 0 và không có chữ số 0 nào thì chỉ cần cộng thêm 1 thì tổng sẽ khác 0
TH3: Tổng lớn hơn 0 và không có số 0 vậy số step sẽ chính là số chữ số 0 trong đó
TH4: Tổng bé hơn 0 và có số 0 trong đó thì cũng sẽ dùng zeros để đếm số lượng số 0 trong đó và lấy sum + step để xem nếu sum = 0 thì step++ 
*/