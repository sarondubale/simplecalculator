#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Welcome to the calculator program!" << endl;
    cout << "Please enter an expression in the form num1 op num2:" << endl;

    cin >> num1 >> op >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 == 0) {
                cout << "Error: division by zero" << endl;
            }
            else {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            break;
        case '^':
            cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << endl;
            break;
        default:
            cout << "Error: invalid operator" << endl;
            break;
    }

    return 0;
}