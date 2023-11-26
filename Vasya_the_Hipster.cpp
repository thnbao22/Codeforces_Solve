#include<iostream>
#include<cmath>
using namespace std;
/*
* ý tưởng:
- có thể nhận thấy số ngày nhiều nhất có thể mặc 2 chiếc tất khác màu chính là min của 2 chiếc tất đó
số tất xanh cũng như tất đỏ sẽ bằng a - số ngày mặc 2 chiếc tất khác màu và b tương tự
để tính số ngày mặc 2 chiếc cùng màu thì sẽ có 2 trường hợp
1 trong 2 chiếc đã hết hoặc 1 trong 2 chiếc ít hơn chiếc còn lại 
vậy số ngày mặc 2 chiếc cùng màu có thể tính bằng 
số tất đỏ còn lại chia 2 cũng như số tất xanh chia 2
và tổng lại sẽ thỏa cả 2 trường hợp
tại sao phải chia 2
vì để mặc được 2 chiếc vớ cùng màu trong 1 ngày
thì phải có 2 chiếc vở đỏ hoặc 2 chiếc vớ xanh.
*/
//https://codeforces.com/problemset/problem/581/A
int main() {
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	short a, b; cin >> a >> b;
	int day_with_two_different_socks = min(a, b);
	int day_with_the_same_socks = (a - day_with_two_different_socks) / 2 + (b - day_with_two_different_socks) / 2;
	cout << day_with_two_different_socks << " " << day_with_the_same_socks;
	return 0;
}