#pragma once
#include <iostream>
using namespace std;

class LoanOfficer {
    public :
        virtual void handle(int value) = 0;
        virtual ~LoanOfficer() {}
};
class LoanOfficer1 : public LoanOfficer {
    private :
        LoanOfficer* next;
    public :
        LoanOfficer1();
        ~LoanOfficer1();
        void handle(int value);
};
class LoanOfficer2 : public LoanOfficer {
    private :
        LoanOfficer* next;
    public :
        LoanOfficer2();
        ~LoanOfficer2();
        void handle(int value);
};
class LoanOfficer3 : public LoanOfficer {
    private :
        LoanOfficer* next;
    public :
        LoanOfficer3();
        ~LoanOfficer3();
        void handle(int value);
};
class Loan {
    private :
        int loanValue;
        LoanOfficer* next;
    public :
        Loan(int loanValue);
        ~Loan();
};