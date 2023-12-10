// 하노이탑
#include <iostream>

void move_one_disk(char start, char end) {
    std::cout << "Move top disk from " << start << " to " << end << std::endl;
}

void towers(int num, char source, char dest, char aux) {
    if (num == 1) {
        move_one_disk(source, dest);
    } else {
        towers(num - 1, source, aux, dest);
        move_one_disk(source, dest);
        towers(num - 1, aux, dest, source);
    }
}

int main() {
    int n;
    do {
        std::cout << "Enter number of disks(1 to 7): ";
        std::cin >> n;
    } while (n < 1 || n > 7);

    towers(n, 'A', 'C', 'B');
    

        return 0;
}