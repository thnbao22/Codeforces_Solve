#include<iostream>
#include<string>
using namespace std;

int main() {
	string position; cin >> position;
	char column = position[0];
	char row = position[1];
	int moves = 8; // giả định số bước đi là 8
	if (column == 'a' || column == 'h') {
		moves -= 3; // kiểm tra nếu vua đang ở cột a hoặc cột h thì số nước đi - 3
	}
	if (row == '1' || row == '8') {
		moves -= 3; // kiểm tra tiếp nếu vua đang ở hàng 1 hoặc hàng 8 thì số nước trừ tiếp cho 3
	}
	if ((row == '8' || row == '1') && (column == 'a' || column == '')) {
		moves++;// kiểm tra xem nếu vua đang đứng ở 1 trong 2 cột a hoặc h và có số hàng là 1 hoặc 8 thì tăng số bước lên 1
	}
	cout << moves;
	return 0;
}