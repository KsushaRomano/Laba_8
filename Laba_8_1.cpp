using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B;
	cout << "Введите значение А: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	if (A == B) {
		A = 0;
		B = 0;
		cout << "Переменные А и В равны " << A << " и " << B << ", соответсвенно";
	}
	else {
		if (A > B) {
			B = A;
			cout << "Переменные А и В равны " << A << " и " << B << ", соответсвенно";
		}
		else { A = B; 
		cout << "Переменные А и В равны " << A << " и " << B << ", соответсвенно";
		};
	};
}