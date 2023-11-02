#include "command.h"

void Receiver::action() { cout << "명령을 실행합니다." << endl; }
ConcreteCommand::ConcreteCommand(Receiver* recv) : receiver(recv){}
void ConcreteCommand::execute() { receiver -> action(); }
void Invoker::storeCommand(Command* cmnd) {
    command = cmnd;
    bool rightTime = false;
    while(!rightTime) {
        cout << "적절한 시점에 1을 입력하세요(이외의 경우 0): ";
        cin >> rightTime;
        if(rightTime) {
            command -> execute();
        }
    }
}