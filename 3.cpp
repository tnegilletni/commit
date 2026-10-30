//Пользователь задаёт произвольный текст, далее программа запрашивает от пользователя порядковый номер (k).
 //А: Вывести k-ую букву (цифру) из заданного пользователем текста.
 //Б: Запросить второй порядковый номер у пользователя (m). Вывести текст (подстроку) в диапазоне от k до m без использование библиотечных функций.

#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    string text;
    cout << "Введите произвольный текст: ";
    getline(cin, text);

    int k;
    cout << "Введите порядковый номер k: ";
    cin >> k;

    if (k >= 1 && k <= (int)text.length()) {
        cout << "k-й символ: " << text[k - 1] << endl;
    } else {
        cout << "Некорректный номер k" << endl;
    }

    

    int m;
    cout << "Введите второй порядковый номер m: ";
    cin >> m;

    if (k >= 1 && m >= k && m <= (int)text.length()) {
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

