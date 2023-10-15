#include "person.hpp"

int main() {
    Date date1(5, 6, 1980);
    Person person1(123456789L, date1);
    Date date2(4, 23, 1978);
    Person person2(987654321L, date2);

    person1.print();
    person2.print();

    return 0;
}