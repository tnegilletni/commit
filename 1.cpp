#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    double num1; 
    int n; 

    cout << "Введите число: ";
    if (!(cin >> num1)) {
        cout << "Ошибка: введено некорректное значение числа!" << endl;
        return 1;
    }

    cout << "Введите степень: ";
    if (!(cin >> n)) {
        cout << "Ошибка: введено некорректное значение степени!" << endl;
        return 1;
    }

    double result = 1;
    
    if (n >= 0) {
        for (int i = 0; i < n; i++) {
            result *= num1;
        }
    }
    else {
        for (int i = 0; i < (-n); i++) { 
            result *= num1;
        }
        result = 1.0 / result;
    }

    cout << num1 << "^" << n << " = " << result << endl;

    return 0;
}