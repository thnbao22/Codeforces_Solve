#include <iostream>
#include <vector>
#include <string>
//https://codeforces.com/problemset/problem/452/A
int main() {
    std::vector<std::string> evolutions = { "vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon" };
    int leng = 0; std::string input;
    std::cin >> leng >> input;
    for (const std::string& word : evolutions) {
        if (word.length() != leng) {
            continue;
        }
        bool match = true;
        for (size_t i = 0; i < leng; ++i) {
            if (input[i] != '.' && input[i] != word[i]) {
                match = false;
                break;
            }
        }
        if (match) {
            std::cout << word;
        }
    }

    return 0;
}
