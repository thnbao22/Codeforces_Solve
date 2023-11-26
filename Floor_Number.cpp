#include<iostream>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int n, x; cin >> n >> x;
		if (n <= 2) {
			cout << 1 << endl;
		}
		else {
			// vì x là số căn phòng tầng đó có
			// cũng tương ứng với mã số mà căn phòng đó có
			// suy ra công thức tính số tầng trên tầng thứ nhất 
			// (n-3) / x chúng ta trừ cho 3 bởi vì lầu 1 và 2 có số phòng lll 1 và 2
			// nên ta đếm từ 3 xong ta chia cho x tức là số căn phòng mà mỗi tầng có
			// ta cần cộng thêm 2 dô nữa bởi vì lầu 1 có 2 phòng
			cout << (n - 3) / x + 2 << endl;
		}
	}
	return 0;
}