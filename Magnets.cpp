#include<iostream>
#include<vector>
using namespace std;
//https://codeforces.com/problemset/problem/344/A
/*
* ý tưởng: giả định rằng đã có sẵn 1 nhóm nam châm
* sử dụng vòng lặp 
* kiểm tra nếu 2 giá trị kề nhau giống nhau
* tức là 2 nam châm này cùng giống nhau
* vậy thì đó đã là 1 nhóm
*/
int main() {
	int n, groups = 1; cin >> n;
	vector<int> magnets(n);
	for (int i = 0; i < n; ++i) {
		cin >> magnets[i];
	}
	for (int i = 1; i < n; ++i) {
		if (magnets[i] != magnets[i - 1]) {
			groups++;
		}
	}
	cout << groups;
	return 0;
}