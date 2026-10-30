#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите правую границу диапазона: ";
    
    if (!(cin >> n)) {
        cout << "Ошибка: введено не число!" << endl;
        return 1;
    }

    if (n < 0) {
        cout << "Некорректный ввод: число не может быть отрицательным." << endl;
        return 0;
    }

    int sum = 0; 
    int i = 0;

    while (i <= n) {
        if (i % 5 == 0) {
            sum += i;      
        }
        i++;
    }

    cout << "Сумма чисел, делящихся на 5: " << sum << endl;

    return 0;
}