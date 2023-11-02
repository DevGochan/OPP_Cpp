#include "observer.h"
#include <cstdlib>
#include <ctime>

int main() {
    Subject subject;
    Observer1 observer1(&subject);
    Observer2 observer2(&subject);

    subject.subscribe(&observer1);
    subject.subscribe(&observer2);

    bool flag = true;
    while(flag) {
        srand(time(0));
        int temp = rand();
        int price = temp % (100 - 10 + 1) + 10;
        if(price < 40) {
            subject.notify(price);
            flag = false;
        }
    }

    subject.unsubscribe(&observer1);
    subject.unsubscribe(&observer2);
    return 0;
}