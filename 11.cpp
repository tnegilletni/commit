#include <iostream> 
using namespace std;
int main() {
    double weight, height;
    setlocale(LC_ALL, "ru_RU.UTF-8"); 
    cout << "Введите вес (кг): ";
    cin >> weight;
    cout << "Введите рост (м): ";
    cin >> height;
    double bmi = weight / (height * height);
    cout << "ИМТ = " << bmi << endl;

}
