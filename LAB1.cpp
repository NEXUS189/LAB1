#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int age;
    cout << "Введите возраст: ";
    cin >> age;

    if (age < 0) {
        cout << "Ошибка: отрицательный возраст" << endl;
    }
    else if (age <= 11) {
        cout << "Ребёнок" << endl;
    }
    else if (age <= 17) {
        cout << "Подросток" << endl;
    }
    else if (age <= 64) {
        cout << "Взрослый" << endl;
    }
    else {
        cout << "Пожилой" << endl;
    }

    return 0;
}