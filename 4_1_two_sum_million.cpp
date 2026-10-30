//1) Вместо ввода пользователя сгенерировать массив из 
//1 000 000 элементов и найти любую пару заданную с клавиатуры (К) Программа должна найти ответ меньше чем за 1 минуту.
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    const int N = 1000000;
    int K;

    cout << "Введите целевое число K: ";
    while (!(cin >> K)) {
        cout << "Ошибка! Введите целое число: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    // Генерация массива
    vector<int> arr(N);
    mt19937 gen(42);
    uniform_int_distribution<> dist(1, 1000);

    generate(arr.begin(), arr.end(), [&]() { return dist(gen); });

    // Создание пар {значение, индекс}
    vector<pair<int, int>> pairs(N);
    for (int i = 0; i < N; i++) {
        pairs[i] = {arr[i], i};
    }

    // Сортировка по значению
    sort(pairs.begin(), pairs.end());

    // Поиск методом двух указателей
    int left = 0, right = N - 1;
    bool found = false;

    while (left < right) {
        int sum = pairs[left].first + pairs[right].first;

        if (sum == K) {
            cout << "\nНайдена пара:\n"
                 << "Индексы: " << pairs[left].second << " и " << pairs[right].second << "\n"
                 << "Значения: " << pairs[left].first << " + " << pairs[right].first << " = " << K << "\n";
            found = true;
            break;
        }
        else if (sum < K) {
            left++;
        }
        else {
            right--;
        }
    }

    if (!found) {
        cout << "Пара, дающая в сумме " << K << ", не найдена.\n";
    }

    return 0;
}