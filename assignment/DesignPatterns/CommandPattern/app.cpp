#include "command.h"

int main() {
    Receiver* receiver;

    Command* command = new ConcreteCommand(receiver);
    Invoker invoker;
    invoker.storeCommand(command);
    delete receiver;
    delete command;
    return 0;
}