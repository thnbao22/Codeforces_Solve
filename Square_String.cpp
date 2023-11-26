#include<iostream>
#include<string>
using namespace std;
//https://codeforces.com/problemset/problem/1619/A
int main() {
	int test; cin >> test;
	while (test--) {
		string s; cin >> s;
		int do_dai = s.length();
		if (do_dai & 1) {
			cout << "NO\n";
		}
		else {
			
			bool square_string = true;
			int s1 = do_dai / 2;
			for (int i = 0; i < s.length() / 2; ++i) {
				if (s[i] != s[s1++]) {
					square_string = false;
					break;
				}
			}
			cout << (square_string ? "YES\n" : "NO\n");
			//string first_half = s.substr(0, do_dai / 2); // cắt chuỗi từ vị trí đầu đến nửa chuỗi
			//string second_half = s.substr(do_dai / 2); // cắt từ 1/2 chuỗi trờ về sau
			//if (first_half == second_half) {
			//	cout << "YES\n";
			//}
			//else {
			//	cout << "NO\n";
			//}
		}
	}
	return 0;
}