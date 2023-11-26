#include<iostream>
#include<string>
#include <iomanip>
//https://codeforces.com/problemset/problem/622/B
void printTimeAfterMinutes(int hh, int mm, int a) {
	int totalMinutes = hh * 60 + mm + a;
	int newHH = (totalMinutes / 60) % 24;
	int newMM = totalMinutes % 60;
	std::cout << std::setw(2) << std::setfill('0') << newHH << ":"
		<< std::setw(2) << std::setfill('0') << newMM << std::endl;
}
int main() {
	std::string time;
	getline(std::cin, time);
	int minutes_passed = 0; std::cin >> minutes_passed;
	std::string hour = time.substr(0, 2);
	std::string minutes = time.substr(3, 2);
	int iHour = std::stoi(hour);
	int iMinutes = std::stoi(minutes);
	printTimeAfterMinutes(iHour, iMinutes, minutes_passed);
	return 0;
}