#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n);
void shiftRight(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимльное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	shiftLeft(arr, n);
	shiftRight(arr, n);
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	

}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
int Sum(int arr[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}return s;
}

double Avg(int arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}return min;
}
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}return max;
}
void shiftRight(int arr[], const int n)
{
	int j = 0;
	int c;
	cout << "Введите количество сдвигов вправо: ";  cin >> c;
	for (int j = 1; j <= c; j++)
	{
		int a;
		a = arr[n - 1];

		for (int i = n - 2; i >= 0; i--)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = a;

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}
void shiftLeft(int arr[], const int n)
{
	int с;
	cout << "Введите количество сдвигов влево: "; cin >> с;
	for (int i = 0; i < с; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;
	}
}

