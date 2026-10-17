#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    string text;
    cout << "Введите произвольный текст: ";
    getline(cin, text);// читаем всю строку с пробелами

    int k;
    cout << "Введите порядковый номер k: ";
    cin >> k;

    // А: k-й символ
    if (k >= 1 && k <= (int)text.length()) {//проверяем что k в пределах длины строки
        cout << "k-й символ: " << text[k - 1] << endl;
    } else {
        cout << "Некорректный номер k" << endl;
    }

    

    int m;
    cout << "Введите второй порядковый номер m: ";
    cin >> m;

    if (k >= 1 && m >= k && m <= (int)text.length()) {// проверяем что m в пределах длины строки и больше или равно k
        string endd = "";
        int i = k - 1;
        while (i < m) {
            endd += text[i];
            ++i;
        }
        cout << "Символы от " << k << " до " << m << ": " << endd << endl;
    } else {
        cout << "Некорректный диапазон" << endl;
    }

    return 0;
}

