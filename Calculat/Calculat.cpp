#include <iostream>
using namespace std;

void showMenu() {
    cout << "Выберите операцию:\n";
    cout << "1. + (+)\n";
    cout << "2. - (-)\n";
    cout << "3. * (*)\n";
    cout << "4. : (/)\n";
    cout << "0. Выйти\n";
    cout << "Введите номер: ";
}

double calculate(double num1, double num2, char operation) {
    switch (operation) {
    case '+': return num1 + num2;
    case '-': return num1 - num2;
    case '*': return num1 * num2;
    case '/':
        if (num2 != 0) return num1 / num2;
        cout << "ytkmpz" << endl;
        return 0;
    default:
        cout << "Error" << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    char operation;
    bool running = true;

    while (running) {
        showMenu();
        cin >> operation;

        if (operation == '0') {
            cout << "Exit.\n";
            break;
        }

        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите второе число: ";
        cin >> num2;

        double result = calculate(num1, num2, operation);
        if (operation != '/' || num2 != 0) {
            cout << "Результат: " << result << endl;
        }

        cout << endl;
    }

    return 0;
}
