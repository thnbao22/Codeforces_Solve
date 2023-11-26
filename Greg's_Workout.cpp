#include<cmath>
#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int most_workout[3] = { 0 };
	for (int i = 0; i < n; ++i) {
		most_workout[i % 3] += a[i];
	}
	int workout_part = max({ most_workout[0], most_workout[1], most_workout[2] });
	if (workout_part == most_workout[0]) {
		cout << "chest";
	}
	else if (workout_part == most_workout[1]) {
		cout << "biceps";
	}
	else {
		cout << "back";
	}
	delete[] a;
	return 0;
}