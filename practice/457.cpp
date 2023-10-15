#include <iostream>
using namespace std;

int main() {
    // 참조 관계를 생성
    int score = 92;
    int& rScore = score;

    //데이터 변수를 사용해서 접근
    cout << "데이터 변수를 사용해서 값에 접근하기" << endl;
    cout << "score: " << score;

    // 레퍼런스를 이용해서 접근
    cout << "레퍼런스를 이용해서 접근하기" << endl;
    cout << "rScore&: " << rScore;
    return 0;
}