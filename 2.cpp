#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    cout << "Введите правую границу диапазона: ";
    cin >> n;
if (n < 0) {
        cout << "Некорректный ввод" << endl;
        return 0;
    }
    int sum = 0; //сумма чисел, делящихся на 5
    int i = 0;//счётчик

    while (i <= n) {//пока i не превысит n
        if (i % 5 == 0) {//если число делится на 5
            sum += i;      
        }
        ++i;
    }

    cout << "Сумма чисел, делящихся на 5: " << sum << endl;
}
