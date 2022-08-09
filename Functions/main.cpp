#include<iostream>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Fak(int n);
int Pow(int a, int b, int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	/*int a, b, n;
	cout << "Введите число для вычисления Факториала: "; cin >> n;
	cout << "Факториал числа: " << n << " равен - " << Fak(n) << endl;*/
	int  i, n, a, b;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> b;
	n = a;
	cout << a << " В степени " << b << " = " << Pow(a, b, n) << endl;
	//cout << "Введите два числа: "; cin >> a >> b;
	//int c = Add(a, b);
	//cout << a << " + " << b << " = " << c << endl;
	//cout << a << " - " << b << " = " << Sub(a, b) << endl;
	//cout << a << " * " << b << " = " << Mul(a, b) << endl;
	//cout << a << " / " << b << " = " << Div(a, b) << endl;
}

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
double Div(int a, int b)
{
	//Division - Деление
	return (double)a / b;
}
int Fak(int n)
{
	int faktor = 1;
	for (int i = 1; i <= n; i++)
	{
		faktor *= i;
	}
	return faktor;
}
int Pow(int a, int b, int n)
{
	for (int i = 1; i < b; i++)
	{
		n = n * a;
	}
	return n;
}

