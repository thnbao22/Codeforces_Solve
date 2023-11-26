#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
//https://codeforces.com/problemset/problem/914/A
bool perfectSquare(int num) {
	int i = sqrt(num);
	return i * i == num;
} 
int findLargestNonperfectSquare(std::vector<int>& v) {
	sort(v.begin(), v.end(), std::greater<int>());
	for (int num : v) {
		if (!perfectSquare(num)) {
			return num;
		}
	}
	return -1;
}
int main() {
	int n = 0; std::cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> v[i];
	}
	std::cout << findLargestNonperfectSquare(v);
	return 0;
}