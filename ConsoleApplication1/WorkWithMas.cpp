#include "stdafx.h"
#include "WorkWithMas.h"

void FillMas(int mas[], int size)
{
	for (int i = 0; i < size; i++)
	{
		mas[i] = 1;
	}
}

void SumMas(int mas[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += mas[i];
	}
}