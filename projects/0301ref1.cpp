#include <iostream>
int main() {
    int score = 92;
    int& r_score = score;

    std::cout << "score : " << score << std::endl;
    std::cout << "r_score: " << r_score << std::endl;

    return 0;
}