#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>
#include <iomanip>
using namespace std;

void print(string message, vector<int> v) {
    cout << message;
    for (int i = 0; i < v.size(); i++) {cout << setw(4) << left << v[i];}
    cout << endl;
}

int main() {
    vector<int> vec;
    vec.push_back(17);
    vec.push_back(10);
    vec.push_back(13);
    vec.push_back(18);
    vec.push_back(15);
    vec.push_back(11);
    print("원본 벡터: ", vec);
    sort(vec.begin(), vec.end(), less<int>());
    print("오름차순: ", vec);
    sort(vec.begin(), vec.end(), greater<int>());
    print("내림차순: ", vec);
    return 0;
}