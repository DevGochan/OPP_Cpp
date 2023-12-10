#include <iostream>
#include <string>
#include <stack>

std::string inputString;
std::stack<char> bracketStack;

int main(void) {
    std::cin >> inputString;

    int result = 0, multiplier = 1;
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == '(') {
            multiplier *= 2;
            bracketStack.push('(');
        } else if (inputString[i] == '[') {
            multiplier *= 3;
            bracketStack.push('[');
        } else if (inputString[i] == ')') {
            if (bracketStack.empty() || bracketStack.top() != '(') {
                result = 0;
                break;
            }
            if (inputString[i - 1] == '(') {
                result += multiplier;
                multiplier /= 2;
                bracketStack.pop();
            } else {
                multiplier /= 2;
                bracketStack.pop();
            }
        } else if (inputString[i] == ']') {
            if (bracketStack.empty() || bracketStack.top() != '[') {
                result = 0;
                break;
            }
            if (inputString[i - 1] == '[') {
                result += multiplier;
                multiplier /= 3;
                bracketStack.pop();
            } else {
                multiplier /= 3;
                bracketStack.pop();
            }
        }
    }

    if (!bracketStack.empty()) result = 0;

    std::cout << result << "\n";

    return 0;
}
