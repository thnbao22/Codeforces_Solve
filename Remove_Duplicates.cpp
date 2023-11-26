#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	int n; cin >> n;
	vector<int> a;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		a.push_back(x);
	}
	// ý tưởng sài mảng đánh dấu
	// đảo ngược mảng lại và đánh dấu các phần tử đã đi qua
	vector<int> result;
	vector<bool> seen(1001, false);
	reverse(a.begin(), a.end());
	for (auto x : a) {
		if (!seen[x]) {
			result.push_back(x);
			seen[x] = true;
		}
	}
	reverse(result.begin(), result.end());
	cout << result.size() << endl;
	for (auto x : result) {
		cout << x << " ";
	}
	return 0;
}