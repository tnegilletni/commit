//Бинарный поиск: Реализовать алгоритм поиска элемента в отсортированном массиве.
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите размер отсортированного массива: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Ошибка! Введите целое положительное число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    int arr[1000];
    cout << "Введите " << n << " элементов по возрастанию:\n";
    
    for (int i = 0; i < n; i++) {
        while (!(cin >> arr[i])) {
            cout << "Ошибка! Введите целое число: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }

    int key;
    cout << "Введите число для поиска: ";
    while (!(cin >> key)) {
        cout << "Ошибка! Введите целое число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    int left = 0;
    int right = n - 1;
    int found = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    if (found != -1)
        cout << "Элемент найден на позиции " << found << endl;
    else
        cout << "Элемент не найден" << endl;

    return 0;
}