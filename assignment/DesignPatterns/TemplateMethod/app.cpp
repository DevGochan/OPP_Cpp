#include "meeting.h"

int main() {
    cout << "영어 인사" << endl;
    EnglishMeeting engMt;
    engMt.meeting();
    cout << endl;

    cout << "프랑스어 인사" << endl;
    FrenchMeeting freMt;
    freMt.meeting();
    cout << endl;
    return 0;
}