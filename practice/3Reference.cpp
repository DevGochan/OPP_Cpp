#include <iostream>

using namespace std;



int main() {
    int score = 92;
    int& rScore = score;

    cout << "데이터 변수 사용 : " << score << endl;
    cout << "레퍼런스 사용 : " << rScore << endl;

    return 0;
}