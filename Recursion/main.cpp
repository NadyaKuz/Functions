#include<iostream>
using namespace std;

void elevator(int floor);
int fact(int N);
double power(double a, int n);
void Fibonacci(int n, int a = 0, int b = 1);
//#define ELEVATOR
//#define POWER
#define FIBONACCI

#ifdef ELEVATOR

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello World";
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);

}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже\n";
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже\n";
}
#endif // ELEVATOR

void main()
{
	setlocale(LC_ALL, "");
	int N;
 cout << "Введите целое число для вычисления факториала: "; cin >> N;
 cout << fact(N) << endl;

#ifdef POWER
 int a;
 int n;
 cout << "Введите основание степени: "; cin >> a;
 cout << "Введите показатель степени: "; cin >> n;
 cout << power(a, n) << endl;
#endif // POWER

#ifdef FIBONACCI
	int n;
	cout << "Введите число фибоначи: "; cin >> n;
	Fibonacci(n);
#endif // FIBONACCI

}
int fact(int N)
{
	if (N == 0)
	{
		return 1;
	}
	if (N == 1)
	{
		return 1;
	}
		return N * fact(N - 1);
}
double power(double a, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n > 0)
	{
		return a * power(a, n - 1);
	}
	//else return 1 / a * power(a, n + 1);
	else return power(1 / a, - n);
}
void Fibonacci(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	Fibonacci(n, b, a + b);
}
