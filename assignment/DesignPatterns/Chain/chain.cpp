#include "chain.h"

LoanOfficer1::LoanOfficer1() {
    next = new LoanOfficer2();
}

LoanOfficer1::~LoanOfficer1() {
    delete next;
}

void LoanOfficer1::handle(int loanValue) {
    if(loanValue <= 1000) {
        cout << "Officer1 객체입니다. 대출이 가능합니다." << endl;
        cout << "자세한 사항은 전화로 문의해주세요." << endl;
    }  else {
        next -> handle(loanValue);
    }
}

LoanOfficer2::LoanOfficer2() {
    next = new LoanOfficer3();
}

LoanOfficer2::~LoanOfficer2() {
    delete next;
}

void LoanOfficer2::handle(int loanValue) {
    if(loanValue <= 100000) {
        cout << "Officer2 객체입니다. 대출이 가능합니다." << endl;
        cout << "자세한 사항은 전화로 문의해주세요." << endl;
    } else {
        next -> handle(loanValue);
    }
}

LoanOfficer3::LoanOfficer3() {
    next = 0;
}

LoanOfficer3::~LoanOfficer3() {
    delete next;
}

void LoanOfficer3::handle(int loanValue) {
    if(loanValue > 100000 && loanValue <= 1000000) {
        cout << "Officer3 객체입니다. 대출이 가능합니다." << endl;
        cout << "자세한 사항은 전화로 문의해주세요." << endl;
    } else {
        cout << "해당 대출은 불가능합니다." << endl;
    }
}

Loan::Loan(int value) : loanValue(value) {
    next = new LoanOfficer1();
    next -> handle(loanValue);
}

Loan::~Loan() {
    delete next;
}