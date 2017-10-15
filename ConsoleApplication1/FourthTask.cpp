#include "stdafx.h"
#include "FourthTask.h"

void StartFourthTask()
{
	cout << "���������� �����. 10� ��������� " << CheckOpmGetWtime(100000) << endl;
	cout << "���������� �����. 20� ��������� " << CheckOpmGetWtime(200000) << endl;
	cout << "���������� �����. 30� ��������� " << CheckOpmGetWtime(300000) << endl;
	cout << "���������� �����. 10� ��������� " << CheckGetTickCount(100000) << endl;
	cout << "���������� �����. 20� ��������� " << CheckGetTickCount(200000) << endl;
	cout << "���������� �����. 30� ��������� " << CheckGetTickCount(300000) << endl;
	//��� ��� ������� ���������� ���� � �� � ����� �� 4 �����
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