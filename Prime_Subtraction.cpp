#include <iostream>
using namespace std;
// mẹo: nếu hai số trừ nhau luôn lớn hơn 1 thì ta vẫn có thể chọn được số nguyên tố là 2 và trừ nó đi cho tới khi x = y
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        if (x - y > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
