#include <iostream>
#include <vector>
//https://codeforces.com/problemset/problem/1512/A
// gia du trong 3 cap so dau tien thi se co 2 th 
// 1 so khac 2 so con lai hoac 3 so deu giong nhau
// -> ta chi can tim common va duyet tuyen tinh tim gia tri khac common la se co ket qua can tim

int findIndex(const std::vector<int>& v, int common) {
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] != common) {
            return i + 1;
        }
    }
}
int main() {
    int test = 0; std::cin >> test;
    while (test--) {
        int n = 0; std::cin >> n;
        std::vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> v[i];
        }
        int common = (v[0] != v[1] && v[0] != v[2]) ? v[1] : v[0];
        std::cout << findIndex(v, common) << "\n";
    }
    return 0;
}
