#include <iostream>
#include <string>
#include <vector>
//https://codeforces.com/problemset/problem/877/A
bool isFromContest(const std::string& problemName) {
    std::vector<std::string> friends = { "Danil", "Olya", "Slava", "Ann", "Nikita" };
    int count = 0;
    for (const auto& friendName : friends) {
        size_t start_pos = 0;
        while ((start_pos = problemName.find(friendName, start_pos)) != std::string::npos) {
            ++count;
            start_pos += friendName.length();
        }
    }
    return count == 1;
}

int main() {
    std::string problemName;
    std::getline(std::cin, problemName);

    if (isFromContest(problemName)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}
