#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
    // ý tưởng bài chính là tìm ra hai số lớn nhất và lớn nhì
    int max1 = 0, max2 = 0, winner = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
            winner = i + 1;
        }
        else if (a[i] > max2) {
            max2 = a[i];
        }
    }
    cout << winner << " " << max2;
	return 0;
}