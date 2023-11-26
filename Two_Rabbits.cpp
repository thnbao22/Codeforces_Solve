#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int x, y, a, b; cin >> x >> y >> a >> b;
		// y - x chính là khoảng cách giữa 2 con thỏ
		// a + b chỉnh là tổng số bước của 2 con thỏ trong mỗi giây
		// có thể nói a + b chính là khoảng cách của 2 con thỏ khi đã đi a và b bước
		if ((y - x) % (a + b) == 0) {
			cout << (y - x) / (a + b) << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}