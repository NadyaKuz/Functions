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
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);

}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����\n";
}
#endif // ELEVATOR

void main()
{
	setlocale(LC_ALL, "");
	int N;
 cout << "������� ����� ����� ��� ���������� ����������: "; cin >> N;
 cout << fact(N) << endl;

	int a;
	int n;
	cout << "������� ��������� �������: "; cin >> a;
	cout << "������� ���������� �������: "; cin >> n;
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
