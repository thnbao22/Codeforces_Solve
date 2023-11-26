#include <iostream>
using namespace std;
// quả bóng vàng cần đến 2 yellow crystal x
// quả bóng xanh lá cây cần 1 bóng xanh nước và 1 bóng vàng y
// quả bóng xanh nước cần đến 3 quả bóng xanh nước z
//-> vậy số bóng xanh nước cần mua sẽ là  3 * z + y
// -> số quả bóng vàng cần mua là 2 * x + y
int main() {
    long long A, B, x, y, z;
    cin >> A >> B;
    cin >> x >> y >> z;
    long long yellowNeeded = 2 * x + y;
    long long blueNeeded = 3 * z + y;
    long long yellowToBuy = max(0LL, yellowNeeded - A);
    long long blueToBuy = max(0LL, blueNeeded - B);
    cout << yellowToBuy + blueToBuy << endl;
    return 0;
}
