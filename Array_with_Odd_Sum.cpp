#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
//https://codeforces.com/problemset/problem/1296/A
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        int count_odd = 0, count_even = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] & 1) {
                count_odd++;
            }
            else {
                count_even++;
            }
        }
        if (count_odd > 0 && (count_even > 0 || count_odd & 1)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}

/*
* đếm số lượng phần tử chẵn và lẻ trong mảng
* nếu tất cả trong phần tử mảng đều là số lẻ thì số lượng phải là số lẻ thì mới có tổng là 1 số lẻ
* vậy nếu có số chẵn trong phần tử số lẻ tức count_even > 0
* vậy có khả năng thay thế được các phần tử chẵn bằng phần tử lẻ
* vậy ta sẽ có trường hợp tổng quát
* nếu số lượng số lẻ > 0 và số lượng số chẵn lớn hơn 0 tức là ta có thể thay thế số chẵn thành lẻ thì tổng của mảng là lẻ
*   hoặc  là số lượng lẻ lớn hơn 0 và có số lượng là lẻ vậy thì chắc chắn mảng đó có tổng là lẻ
*/