#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

string ss(int num, int base) { 
    if (num == 0) return "0";

    string digits = "0123456789ABCDEF";
    string result = "";

    while (num > 0) {
        result += digits[num % base];
        num /= base;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8"); 
    int number;
    
    cout << "Введите десятичное число: ";
    
    if (!(cin >> number)) {
        cout << "Ошибка: введено не число!" << endl;
        return 1;
    }

    if (number < 0) {
        cout << "Ошибка: программа поддерживает только неотрицательные числа." << endl;
        return 1;
    }

    cout << "Двоичная: " << ss(number, 2) << endl;
    cout << "Восьмеричная: " << ss(number, 8) << endl;
    cout << "Шестнадцатеричная: " << ss(number, 16) << endl;

    return 0;
}