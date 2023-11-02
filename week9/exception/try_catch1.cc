#include <iostream>

int main() {
    int num1, num2, result;
    for(int i = 0; i < 3; i ++) {
        std::cout << "정수를 입력하세요: ";
        std::cin >> num1;
        std::cout << "또 다른 정수를 입력하세요: ";
        std::cin >> num2;

        try {
            if(num2 == 0) {
                throw 0;
            }
            result = num1 / num2;
            std::cout << "결과 = " << result << std::endl;
        }
        catch(int x) {
            std::cout << "0으로 나눌 수 없습니다." << std::endl;
        }
}
    return 0;
}