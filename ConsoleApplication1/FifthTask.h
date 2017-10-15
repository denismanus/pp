#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#ifndef MATRIX
#define MATRIX

void StartFifthTask();

//Ниже класс для объекта матрицы
template <typename T>
class MatrixObject
{
public:
	T **mas;
	int size;

	MatrixObject(int size)
	{
		this->size = size;
		mas = new T*[size];
		for (int i = 0; i < size; i++)
		{
			mas[i] = new T[size];
		}
	}

	MatrixObject(const MatrixObject &mat)
	{
		size = mat.size;
		mas = mat.mas;
	}

	void FillMatrix(int number)
	{
		for (int i = 0; i < size; i++)
		{
			for (int k = 0; k < size; k++)
			{
				mas[i][k] = number;
			}
		}
	}

	void PrintMatrix()
	{
		for (int i = 0; i < size; i++)
		{
			for (int k = 0; k < size; k++)
			{
				std::cout<<mas[i][k] ;
			}
			std::cout<<std::endl;
		}
	}

	MatrixObject MultipleMatrix(MatrixObject second)
	{
		MatrixObject <T> result(size);
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				T res = 0;
				for (int r = 0; r <size; r++) {
					res += mas[i][r] * second.mas[r][j];
				}
				result.mas[i][j] = res;
			}
		}
		return result;
	}
};
#endif // !1




