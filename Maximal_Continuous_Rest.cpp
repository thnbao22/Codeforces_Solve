#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	a.insert(a.end(), a.begin(), a.end());//nối mảng a với chính nó
	/*
	* Hàm insert() của vector có cấu trúc như sau: a.insert(position, first, last)
	trong đó position là vị trí chèn, first và last là các iterator chỉ định phạm vi các phần tử cần chèn.
	*/
	int max_rest = 0;
	int current_rest = 0;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] == 1) {
			current_rest++;
			max_rest = max(max_rest, current_rest);
		}
		else {
			current_rest = 0;
		}
	}
	cout << max_rest << endl;
	return 0;
}