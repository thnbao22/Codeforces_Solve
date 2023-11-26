#include<iostream>
#include<cmath>
using namespace std;
/* 
* kiến thức áp dụng:
Cấp số cộng:
u(n+1) = u(n) + d với d là cộng sai
Tồng n số hạng đầu: S(n) = n*(u1 + un)/2 = n*(2u1 + (n-1).d)/2
vì chỉ sử dụng đến những phép tính -> solution O(1)
*/
//https://codeforces.com/problemset/problem/546/A
int main() {
	int k, n, w; cin >> k >> n >> w;
	//cout << w * (k*(w+1))/ 2 - n;
	
	if (w * (k * (w + 1)) / 2 <= n) {
		cout << 0;
	}
	else {
		cout << w * (k * (w + 1)) / 2 - n;
	}
	return 0;
}