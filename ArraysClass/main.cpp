#include"stdafx.h"
#include"Constants.h"
#include"Fillrand.h"
#include"Print.h"
#include"Print.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Statistic.h"
#include"Statistic.cpp"
#include"Shift.h"
#include"Shift.cpp"


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
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	shiftLeft(arr, n);
	shiftRight(arr, n);

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	shiftLeft(brr, SIZE);
	shiftRight(brr, SIZE);

	const int k = 3;
	char crr[k];
	FillRand(crr,k);
	Print(crr, k);
	Sort(crr, k);
	Print(crr, k);
	cout << "Сумма элементов массива: " << Sum(crr, k) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(crr, k) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(crr, k) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(crr, k) << endl;
	shiftLeft(crr, k);
	shiftRight(crr, k);

	const int l = 7;
	float frr[l];
	FillRand(frr, l);
	Print(frr, l);
	Sort(frr, l);
	Print(frr, l);
	cout << "Сумма элементов массива: " << Sum(frr, l) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(frr, l) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(frr, l) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(frr, l) << endl;
	shiftLeft(frr, l);
	shiftRight(frr, l);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;

	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;

	float f_arr_2[ROWS][COLS];
	FillRand(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(f_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(f_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(f_arr_2, ROWS, COLS) << endl;

}


