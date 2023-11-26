#include<iostream>
//https://cses.fi/problemset/task/1618
// ý tưởng dựa trên đếm cặp số 2 và 5
// số cặp 2 và 5 sẽ là số lượng số 0 có trong dãy
int main() {
	int n = 0; std::cin >> n;
	int res = 0;
	for (int i = 5; i <= n; i *= 5) {
		res += (n / i);
	}
	std::cout << res;
	return 0;
}