#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
/*
* ý tưởng:
 vì b[i] = a[i] - x[i] có thể suy ngược lại là a[i] = b[i] + x[i]
 vì phần tử đầu tiên của mảng x chắc chắn luôn bằng  0 nên ta sẽ có một biến để tính a[i]
*/
int main() {
	int n; cin >> n;
	vector<int> b(n), a(n);
	int x = 0;
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		a[i] = b[i] + x;
		x = max(a[i], x);
		cout << a[i] << " ";
	}
	
	return 0;
}