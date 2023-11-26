#include<iostream>
#include<string>
using namespace std;

int main() {
	int test; cin >> test;
	while (test--) {
		string hallway; cin >> hallway;
		int r = -1, g = -1, b = -1, R = -1, G = -1, B = -1;
		for (int i = 0; i < hallway.length(); ++i) {
			if (hallway[i] == 'r') {
				r = i;
			}
			else if (hallway[i] == 'g') {
				g = i;
			}
			else if (hallway[i] == 'b') {
				b = i;
			}
			else if (hallway[i] == 'B') {
				B = i;
			}
			else if (hallway[i] == 'R') {
				R = i;
			}
			else {
				G = i;
			}
		}
		if (r < R && g < G && b < B) { // vì người hiệp sĩ phải nhặt được khóa trước khi mở cửa
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}