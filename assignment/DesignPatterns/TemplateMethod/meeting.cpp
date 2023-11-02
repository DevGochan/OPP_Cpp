#include "meeting.h"

void Meeting::meeting(){
    greeting();
    farewell();
}

void EnglishMeeting::greeting() {
    cout << "Hello my friends!" << endl;
}

void EnglishMeeting::farewell() {
    cout <<"Bye my friends!" << endl;
}

void FrenchMeeting::greeting() {
    cout << "Bonjour mes amis" << endl;
}

void FrenchMeeting::farewell() {
    cout <<"Au revoir mes amis" << endl;
}