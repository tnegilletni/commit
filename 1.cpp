#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double num1; 
    int n; // переменная для степени
    cout << "Введите число:";
    cin >> num1; // ввод числа
    cout <<"Введите степень:";
    cin >> n;// ввод степени

    double result = 1;
    if (n>=0) {
        for (int i=0; i<n; i++){//умножаем число само на себя пока i не станет равным n
            result *= num1;
        }
    }
    else {
        for (int i=0; i<(-n); i++){//умножам число само на себя пока -i не станет равным -n 
            result *= num1;
        }
        result = 1.0/result;
    }
    cout<< num1 << "^" << n << " = " << result<<endl;
}