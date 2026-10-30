// Напишите программу, которая принимает на вход массив из (N) целых чисел и целевое число (K). 
// Программа должна найти и вывести индексы двух элементов массива,
// сумма которых равна (K). Если таких элементов несколько, выведите любую пару. Если пары нет — сообщите об этом.
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n, k;

    cout << "Введите размер массива N: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Ошибка! Введите целое положительное число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "Введите целевое число K: ";
    while (!(cin >> k)) {
        cout << "Ошибка! Введите целое число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    int arr[1000];
    cout << "Введите " << n << " чисел:\n";
    for (int i = 0; i < n; i++) {
        while (!(cin >> arr[i])) {
            cout << "Ошибка! Введите целое число: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            if (arr[i] + arr[j] == k) {
                cout << "Найдена пара: индексы " << i << " и " << j << " (значения " << arr[i] << " + " << arr[j] <<" = " << k << ")\n";
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "Пара не найдена\n";
    }

    return 0;
}