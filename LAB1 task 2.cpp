
#include <iostream>
using namespace std;
int main()  {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите положительное целое число n: ";
    cin >> n;
    int abc = n % 2;
    cout << "n % 2: " << abc << endl;
    if (abc == 0) {
        cout << "Чётность: чётное" << endl;
    }
    else {
        cout << "Чётность: нечётное" << endl;
    }
    int lastDigit = n % 10;
    cout << "Последняя цифра (n % 10): " << lastDigit << endl;

    return 0;
}
