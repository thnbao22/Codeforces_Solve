#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		int length; cin >> length;
		cout << (length / 2 + length % 2) << endl;
	}
	return 0;
}