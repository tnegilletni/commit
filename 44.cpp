#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int d, m, y;
    int curd, curm, cury;

    cout << "Введите день рождения: ";
    if (!(cin >> d)) { cout << "Ошибка: введено не число!" << endl; return 1; }
    
    if (d < 1 || d > 31) {
        cout << "Ошибка: день должен быть в диапазоне от 1 до 31!" << endl; return 1;}
    
    cout << "Введите месяц рождения: ";
    if (!(cin >> m)) { cout << "Ошибка: введено не число!" << endl; return 1; }
    
    cout << "Введите год рождения: ";
    if (!(cin >> y)) { cout << "Ошибка: введено не число!" << endl; return 1; }

    if (m < 1 || m > 12) {
        cout << "Ошибка: месяц должен быть в диапазоне от 1 до 12!" << endl; return 1;}
    
    cout << "Введите сегодняшний день: ";
    if (!(cin >> curd)) { cout << "Ошибка: введено не число!" << endl; return 1; }
    
    cout << "Введите сегодняшний месяц: ";
    if (!(cin >> curm)) { cout << "Ошибка: введено не число!" << endl; return 1; }
    
    cout << "Введите сегодняшний год: ";
    if (!(cin >> cury)) { cout << "Ошибка: введено не число!" << endl; return 1; }

    if (cury < 1900 || cury > 2100) {
        cout << "Ошибка: указан нереалистичный текущий год!" << endl;
        return 1;
    }
    if (curm < 1 || curm > 12) {
        cout << "Ошибка: текущий месяц должен быть в диапазоне от 1 до 12!" << endl;
        return 1;
    }
    

    if (y > cury || (y == cury && m > curm) || (y == cury && m == curm && d > curd)) {
        cout << "Ошибка: дата рождения не может быть позже текущей даты!" << endl;
        return 1;
    }

    int age = cury - y;

    if (curm < m || (curm == m && curd < d)) {
        age--;
    }

    cout << "Ваш возраст: " << age << endl;

    return 0;
}