#include <iostream>
using namespace std;

int main() {
    int d, m, y;
    setlocale(LC_ALL, "ru_RU.UTF-8");
    cout << "Введите день рождения: ";
    cin >> d;
    cout << "Введите месяц рождения: ";
    cin >> m;
    cout << "Введите год рождения: ";
    cin >> y;
    int curd, curm, cury;
    cout << "Введите сегодняшний день: ";
    cin >> curd;
    cout << "Введите сегодняшний месяц: ";
    cin >> curm;
    cout << "Введите сегодняшний год: ";
    cin >> cury;

    int age = cury - y;

    //если др в этом году ещё не наступил
    if (curm < m || (curm == m && curd < d)) {
        age--;
    }

    cout << "Ваш возраст: " << age << endl;

}