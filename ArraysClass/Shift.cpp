#include"Shift.h"
template<typename T>
void shiftRight(T arr[], const int n)
{
	int j = 0;
	int c;
	cout << "¬ведите количество сдвигов вправо: ";  cin >> c;
	for (int j = 1; j <= c; j++)
	{
		T a;
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

template<typename T>
void shiftLeft(T arr[], const int n)
{
	int с;
	cout << "¬ведите количество сдвигов влево: "; cin >> с;
	for (int i = 0; i < с; i++)
	{
		T buffer = arr[0];
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
