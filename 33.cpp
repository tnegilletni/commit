#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001 > nul");//кодировка UTF-8

    string text;
    cout << "Введите строку: ";
    getline(cin, text);

    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int punct = 0;

    for (size_t i = 0; i < text.size(); ++i) {//перебираем каждый символ строки
        unsigned char ch = text[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            ++letters;
        }
        else if (ch >= '0' && ch <= '9') {
            ++digits;
        }
        else if (ch == ' ') {
            ++spaces;
        }
        else if (ch >= 128) {
            ++letters;
            ++i;
        }
        else {
            ++punct;
        }
    }

    cout << "Букв: " << letters << endl;
    cout << "Цифр: " << digits << endl;
    cout << "Пробелов: " << spaces << endl;
    cout << "Знаков препинания: " << punct << endl;

    return 0;
}