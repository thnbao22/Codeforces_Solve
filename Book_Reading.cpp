#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n, t, a, free_time = 0;
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        free_time += 86400 - a;
        if (free_time >= t) { // nếu tổng số giây rảnh rỗi ở ngày thứ i lớn hơn hoặc bằng số giây cần đọc một cuốn sách
            cout << i << endl; // in ra ngày đó kết thúc chương trình
            return 0;
        }
    }
	return 0;
}