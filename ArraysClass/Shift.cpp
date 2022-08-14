#include"stdafx.h"
#include"constants.h"
#include"Shift.h"

void shiftRight(int arr[], const int n)
{
	int j = 0;
	int c;
	cout << "¬ведите количество сдвигов вправо: ";  cin >> c;
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
void shiftRight(double arr[], const int n)
{
	int j = 0;
	int c;
	cout << "¬ведите количество сдвигов вправо: ";  cin >> c;
	for (int j = 1; j <= c; j++)
	{
		double a;
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
void shiftRight(char arr[], const int n)
{
	int j = 0;
	int c;
	cout << "¬ведите количество сдвигов вправо: ";  cin >> c;
	for (int j = 1; j <= c; j++)
	{
		char a;
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
void shiftRight(float arr[], const int n)
{
	int j = 0;
	int c;
	cout << "¬ведите количество сдвигов вправо: ";  cin >> c;
	for (int j = 1; j <= c; j++)
	{
		float a;
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
	cout << "¬ведите количество сдвигов влево: "; cin >> с;
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
void shiftLeft(double arr[], const int n)
{
	int с;
	cout << "¬ведите количество сдвигов влево: "; cin >> с;
	for (int i = 0; i < с; i++)
	{
		double buffer = arr[0];
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
void shiftLeft(char arr[], const int n)
{
	int с;
	cout << "¬ведите количество сдвигов влево: "; cin >> с;
	for (int i = 0; i < с; i++)
	{
		char buffer = arr[0];
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
void shiftLeft(float arr[], const int n)
{
	int с;
	cout << "¬ведите количество сдвигов влево: "; cin >> с;
	for (int i = 0; i < с; i++)
	{
		float buffer = arr[0];
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