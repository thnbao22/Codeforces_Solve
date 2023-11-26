#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = (long long)n * (n + 1) / 2;
    for (int i = 0; i < n - 1; i++) {
        int a;
        cin >> a;
        sum -= a;
    }
    cout << sum << endl;
    return 0;
}
