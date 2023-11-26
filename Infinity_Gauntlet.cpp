#include <iostream>
#include<unordered_map>
#include <vector>
//https://codeforces.com/problemset/problem/987/A
int main() {
    std::unordered_map<std::string, std::string> infinityStones;
    infinityStones["purple"] = "Power";
    infinityStones["green"] = "Time";
    infinityStones["blue"] = "Space";
    infinityStones["orange"] = "Soul";
    infinityStones["red"] = "Reality";
    infinityStones["yellow"] = "Mind";
    int n = 0; std::cin >> n;
    std::vector<std::string> colorsSeen(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> colorsSeen[i];
    }
    std::vector<std::string> res;
    for (auto it = infinityStones.begin(); it != infinityStones.end(); ++it) {
        if (std::find(colorsSeen.begin(), colorsSeen.end(), it->first) == colorsSeen.end()) {
            res.push_back(it->second);
        }
    }
    std::cout << res.size() << "\n";
    for (auto& x : res) {
        std::cout << x << "\n";
    }

    return 0;
}
