#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    std::vector<int> vec1(4, 31);
    std::vector<int> vec2{2, 4, 5, 6, 7};
    std::vector<int> other_vec = vec2;
    std::cout << "size of vec2: " << vec2.size() << std::endl;
    std::cout << "max size of vec2: " << vec2.max_size() << std::endl;
    vec2.resize(7, 0);
    std::cout << "size of vec2: " << vec2.size() << std::endl;
    std::cout << "capacity of vec2: " << vec2.capacity() << std::endl;
    vec2.reserve(100);
    std::cout << "capacity of vec2: " << vec2.capacity() << std::endl;
    std::cout << vec2.front() << " " << vec2.back() << std::endl;
    std::cout << vec2[2] << " " << vec2.at(2) << std::endl;


    std::vector<int>::iterator it;
    for (it = vec2.begin(); it != vec2.end(); ++it) std::cout << *it << " ";
    std::cout << std::endl; 

    for (auto it = vec2.begin(); it != vec2.end(); ++it) std::cout << *it << " ";
    std::cout << std::endl; 

    for (auto& i : vec2) i *= 2; // like map function 

    for (const auto& i : vec2) std::cout << i << " ";
    std::cout << std::endl;

    int row = 3;
    int col = 4;
    int val = 16;
    std::vector<std::vector<int>> table(row, std::vector<int>(col, val));
    arr[1][2] = 32;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j)
            std::cout << arr[i][j] << " ";
    }


    return 0;
}