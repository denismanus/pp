#include "stdafx.h"
#include "FifthTask.h"
#include <iostream>

void StartFifthTask()
{
	int size = 5;
	MatrixObject <int> matrix(5);
	matrix.FillMatrix(1);
	matrix.PrintMatrix();
	MatrixObject <int> second =  matrix.MultipleMatrix(matrix);
	second.PrintMatrix();	
}