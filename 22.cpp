#include <iostream>
#include <string>
#include <algorithm> //для reverse
using namespace std;

string ss(int num, int base) {//число в строку
    if (num == 0) return "0";

    string digits = "0123456789ABCDEF";
    string result = "";

    while (num > 0) {
        result += digits[num % base];//добавляем цифру в конец строки
        num /= base;
    }

    reverse(result.begin(), result.end());//переворот строки
    return result;
}
int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8"); 
    int number;//переменная для хранения числа
    cout << "Введите десятичное число: ";
    cin >> number;

    cout << "Двоичная: " << ss(number, 2) << endl;
    cout << "Восьмеричная: " << ss(number, 8) << endl;
    cout << "Шестнадцатеричная: " << ss(number, 16) << endl;

}
