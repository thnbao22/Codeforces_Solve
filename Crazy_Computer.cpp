#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, c; cin >> n >> c;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int count_words = 1; // cho là từ đầu tiên được đọc
	// chỉ duyệt vòng lặp từ i = 1
	for (int i = 1; i < n; ++i) {
		if (a[i] - a[i - 1] <= c) {
			count_words++;
		}
		else {
			count_words = 1;
		}
	}
	cout << count_words;
	return 0;
}