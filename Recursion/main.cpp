#include<iostream>
using namespace std;

void elevator(int floor);
int fact(int N);
double power(double a, int n);
//#define ELEVATOR

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

	int a;
	int n;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << power(a, n) << endl;
}
int fact(int N)
{
	if (N == 0)
	{
		return 0;
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
}
