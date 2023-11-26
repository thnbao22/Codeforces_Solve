#include<iostream>
#include<string>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int n; cin >> n;
		cin.ignore();
		string row1, row2;
		cin >> row1;
		cin.ignore();
		cin >> row2;
		bool phan_biet = 1;
		for (int i = 0; i < n; ++i) {
			if ((row1[i] != row2[i]) && (row1[i] != 'B' || row2[i] != 'G') && (row1[i] != 'G' || row2[i] != 'B')) {
				phan_biet = 0;
				break;
			}
		}
		cout << (phan_biet ? "YES\n" : "NO\n");
	}
	return 0;
}
/*
Kiểm tra các phần tử ở từng cột thứ i của hai row
nếu hai row mà tại đó 2 phần tử không hề cùng màu và nếu một trong 2 phần tử tại đó không bằng màu xanh hoặc màu xanh nước
thì điều đó cho thấy có thể nhận dạng được màu của 2 row
*/