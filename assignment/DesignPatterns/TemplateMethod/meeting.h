#pragma once
#include <iostream>
using namespace std;

class Meeting {
    public :
        void meeting();
        virtual void greeting() = 0;
        virtual void farewell() = 0;
};

class EnglishMeeting : public Meeting {
    public :
        void greeting();
        void farewell();
};

class FrenchMeeting: public Meeting {
    public :
        void greeting();
        void farewell();
};