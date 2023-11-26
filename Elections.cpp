#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int test; cin >> test;
	while (test--) {
		int a, b, c; cin >> a >> b >> c;
		cout << max(0, max(b, c) - a + 1) << " "; 
		/*
		* ứng cứ viên thứ nhất sẽ được tính dựa trên số phiếu chênh lệch của 2 ứng cử viên còn lại và cộng thêm 1 phiếu cho chính bản thân ứng cử viên số 1
		để đảm bảo số phiếu của ứng cử viên số 1 sẽ nhiều hơn 2 ứng cử viên còn lại
		2 ứng cử viên kia tương tự
		*/
		cout << max(0, max(a, c) - b + 1) << " ";
		cout << max(0, max(a, b) - c + 1) << endl;
	}
	return 0;
}