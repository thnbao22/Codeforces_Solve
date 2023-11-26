#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
/*
* ý tưởng:
* vì ma trận phải lớn hơn bằng 3 hoặc là một ma trận vuông >= 9 thì mới mới có được tọa độ trung tâm
* phải có 2 tọa độ x1, x2 để lưu trữ được hai cái hàng trên và hàng dưới của ma trận con -> tọa độ trung tâm sẽ bằng (x1 + x2) /2 + 1
* ví dụ có ma trận vuông 5 hàng được đánh dấu từ  1 2 3 4 5 hì hàng trên và hàng dưới của ma trận con sẽ là 1 và 5
* -> suy ra được hàng của tọa độ trung tâm sẽ là (1+5)/2+1 = 3
* tương tự đối với cột thì y1, y2 cũng sẽ có được cái hàng trung tâm là (y1+y2)/2+1
*/
int main() {
	int n, m; cin >> n >> m;
	int x1 = n, x2 = 0, y1 = m, y2 = 0;
	string* matrix = new string[n];
	for (int i = 0; i < n; ++i) {
		cin >> matrix[i];
		for (int j = 0; j < m; ++j) {
			if (matrix[i][j] == 'B') {
				x1 = min(x1, i);
				x2 = max(x2, i);
				y1 = min(y1, j);
				y2 = max(y2, j);
			}
		}
	}
	cout << (x1 + x2) / 2 + 1 << " " << (y1 + y2) / 2 + 1;
	delete[] matrix;

	return 0;
}