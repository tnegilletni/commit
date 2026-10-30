#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double weight, height;
    cout << "Введите вес (кг): ";
    if (!(cin >> weight) || weight <= 0) {
        cout << "Ошибка: введено некорректное значение веса!" << endl;
        return 1;
    }
    cout << "Введите рост (м): ";
    if (!(cin >> height) || height <= 0) {
        cout << "Ошибка: введено некорректное значение роста!" << endl;
        return 1;
    }
    if (height > 3.0) {
        cout << "Вводите в метрах." << endl;
        return 1;
    }

    double bmi = weight / (height * height);
    cout << fixed << setprecision(1);
    cout << "ИМТ = " << bmi << endl;

    return 0;
}