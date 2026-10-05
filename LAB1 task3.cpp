
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int balance, amount;
	cin >> balance >> amount;
	if (amount <= 0) {
		cout << " сумма вывода денежных средств не может быть отрицательной или равной нулю ";
	}
	else if (amount > balance) {
		cout << "недостаточно средств на балансе";
	}
	else if (amount % 10 != 0) {
		cout << "невозможная оперция";
	}
	else {
		cout << "вывод наличных разрешен";
	} return 0;
}
	

