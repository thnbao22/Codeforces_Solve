#include <iostream>

// tinh tong cac chu so
int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int find_kth_perfect(int k) {
    int count = 0;
    for (int i = 19; ; i += 9) {
        if (sum_of_digits(i) == 10) {
            ++count;
        }
        if (count == k) {
            return i;
        }
    }
    return count;
}
int main() {
    int k;
    std::cin >> k;
    std::cout << find_kth_perfect(k) << std::endl;
    return 0;
}
