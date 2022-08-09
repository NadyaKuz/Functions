#include<iostream>
using namespace std;

int Add(int a, int b)
{
	//Addition - Сложение
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction - Вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - Умножение
	return a * b;
}
int Div(int a, int b)
{
	//Division - Деление
	return a / b;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Введите дв числа: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;

}