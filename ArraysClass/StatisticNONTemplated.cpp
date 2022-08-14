#include"Statistic.h"
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
const char* Avg(char arr[], const int n)
{
	return "Для типа данных char невозможно вычислить среднее-арифметическое: -(\n";
}
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return "Для типа данных char невозможно вычислить среднее-арифметическое: -(\n";
}
