#include<iostream>
#define ll long long
//https://cses.fi/problemset/task/1094
int main() {
	int n = 0; std::cin >> n;
	int previousX = 0; // lưu trữ giá trị của biến trước một biến khác
	ll res = 0;
	for (int i = 0; i < n; ++i) {
		int x = 0; std::cin >> x;
		previousX = std::max(previousX, x);
		res += (previousX - x);
	}
	std::cout << res;

	return 0;
