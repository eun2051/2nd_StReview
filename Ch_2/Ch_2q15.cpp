//하나도 못 작성함
#include <iostream>
using namespace std;

int main() {
    int operand1, operand2;
    char operator1;
    while(true) {
        cout << "? ";
        cin >> operand1 >> operator1 >> operand2;

        int result;
        if (operator1 == '+') {
            result = operand1 + operand2;
        }
        else if (operator1 == '-') {
            result = operand1 - operand2;
        }
        else if (operator1 == '*') {
            result = operand1 * operand2;
        }
        else if (operator1 == '/') {
            result = operand1 / operand2;
        }
        else if (operator1 == '%') {
            result = operand1 % operand2;
        }
        cout << operand1 << operator1 << operand2 << "=" << result << endl;
    }
}