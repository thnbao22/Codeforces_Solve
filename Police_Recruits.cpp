#include<iostream>
using namespace std;
/*
* ý tưởng:
vì việc có tội phạm hay là có số lượng cảnh sát được thuê
-> xem như là một sự kiện -> tạo một biến event
-> khởi tạo các biến offices và untreated_crimes = 0;
cho vòng lặp nhập các sự kiện dô
kiểm tra
nếu sự kiện đó có tội phạm - > nếu mà chưa có cảnh sát nào được thuê -> untreated_crimes tăng lên ngược lại số lượng offices giảm
ngược lại nếu sự kiện đó có cảnh sát được thuê thì offices += event;
*/
//https://codeforces.com/problemset/problem/427/A
int main() {
	int n, offices = 0, untreated_crimes = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int event; cin >> event;
		if (event == -1) {
			if (offices == 0) {
				untreated_crimes++;
			}
			else {
				offices--;
			}
		}
		else {
			offices += event;
		}
	}
	cout << untreated_crimes << endl;
	return 0;
}