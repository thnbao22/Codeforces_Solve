#include<iostream>
//https://codeforces.com/problemset/problem/552/B
//chúng ta sử dụng một vòng lặp để duyệt qua tất cả các số từ 1 đến n. Với mỗi số i, chúng ta cộng thêm số lượng chữ số cần thiết để ghi số i. 
//Điều này được thực hiện bằng cách trừ i từ n và cộng thêm 1 (vì chúng ta đang đếm số lượng, không phải chỉ số). 
//Kết quả cuối cùng sẽ là tổng số chữ số cần thiết để ghi tất cả các số từ 1 đến n.
int main() {
    long long n = 0;
    std::cin >> n;
    long long res = 0;
    for (long long i = 1; i <= n; i *= 10) {
        res += n - i + 1;
    }
    std::cout << res;
    return 0;
}