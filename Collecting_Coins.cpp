#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		int a, b, c, n; cin >> a >> b >> c >> n;
		int tong = a + b + c + n;
		// ta có 2 điều kiện
		// nếu tổng các đồng xu của chị e mà chị e mà chia hết cho 3
		// tức là có thể phân chia đều các đồng xu cho chị em
		// và một điều kiện đó là đồng xu mà mỗi chị e có 
		// có lớn hơn hoặc bằng số xu lớn nhất mà chị em đó có
		if (tong % 3 == 0 && (tong /3) >= max({a,b,c})) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}