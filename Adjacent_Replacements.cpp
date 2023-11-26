#include<iostream>
using namespace std;
// có thể nhận thấy giá trị lẻ khi tăng lên 1 thì thành giá trị chẵn
// mà giá trị chẵn sẽ được giảm ở lần tăng thuật toán tiếp theo
// suy ra được giá trị lẻ của mảng không hề thay đổi trong suốt thuật toán
// trong đó giá trị chẵn giảm 1 thì thành 1 giá trị lẻ
// mà giá trị lẻ đó đã được tăng trước khi giảm đến ở lần phần tử chẵn này
// vậy thuật toán này giúp thay đổi thuộc tính của các số chẵn trong mảng xuống 1 đơn vị
int main() {
	int n; cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			a[i] -= 1;
		}
	}
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	delete[] a;
	return 0;
}