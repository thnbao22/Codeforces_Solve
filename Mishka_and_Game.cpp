#include<iostream>
using namespace std;

int main() {
	int game_rounds; cin >> game_rounds;
	int mishka = 0, chris = 0;
	while (game_rounds--) {
		int m, c; cin >> m >> c;
		if (m == c) {
			mishka++;
			chris++;
		}
		else {
			if (m < c) {
			chris++;
			}
			else {
				mishka++;
			}
		}
	}
	if (mishka == chris) {
		cout << "Friendship is magic!^^";
	}
	else {
		if (mishka > chris) {
			cout << "Mishka";
		}
		else {
			cout << "Chris";
		}
	}
	return 0;
}