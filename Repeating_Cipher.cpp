#include<iostream>
#include<string>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	string t = "";
	int i = 0, j = 1;
	while (i < n) {
		t += s[i];
		i += j;
		j++;
	}
	cout << t;
	return 0;
}