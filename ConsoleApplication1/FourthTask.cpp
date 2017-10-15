#include "stdafx.h"
#include "FourthTask.h"

void StartFourthTask()
{
	cout << "Абсолютное время. 10к элементов " << CheckOpmGetWtime(100000) << endl;
	cout << "Абсолютное время. 20к элементов " << CheckOpmGetWtime(200000) << endl;
	cout << "Абсолютное время. 30к элементов " << CheckOpmGetWtime(300000) << endl;
	cout << "Абсолютное время. 10к элементов " << CheckGetTickCount(100000) << endl;
	cout << "Абсолютное время. 20к элементов " << CheckGetTickCount(200000) << endl;
	cout << "Абсолютное время. 30к элементов " << CheckGetTickCount(300000) << endl;
	//вот тут раздели пожалуйтса сама а то я устал от 4 таска
}

double CheckOpmGetWtime(int masSize)
{
	double start, finish, difference;
	int *mas = new int[masSize];
	FillMas(mas, masSize);
	start = omp_get_wtime();
	SumMas(mas, masSize);
	finish = omp_get_wtime();
	delete [] mas;
	difference = finish - start;
	return difference;
}

DWORD CheckGetTickCount(int masSize)
{
	DWORD start, finish, difference;
	int *mas = new int[masSize];
	FillMas(mas, masSize);
	start = GetTickCount();
	SumMas(mas, masSize);
	finish = GetTickCount();
	delete[] mas;
	difference = finish - start;
	return difference;
}