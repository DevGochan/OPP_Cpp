#include <iostream>

int sum(int n, int result) {
    return !n ? result : sum(n - 1, n + result);
}
int sum(int n) { return sum(n, 0) ;}

int main() {
    int arr[] = {3, 7, 9};
    for (int i = 0; i < sizeof(arr) / sizeof(*arr); ++i) {
        std::cout<< "sum(" << arr[i] << ") = "
            <<sum(arr[i]) << std::endl;
    }
    return 0;
}