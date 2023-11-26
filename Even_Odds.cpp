#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long long n, k;  cin >> n >> k;
    if (k <= ceil(n / 2.0)) {
        cout << static_cast<long long>(k * 2 - 1);
    }
    else {
        cout << static_cast<long long>(2 * (k - ceil(n / 2.0)));
    }
    return 0;
}
