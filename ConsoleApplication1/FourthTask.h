#include <iostream>
#include <omp.h>
#include <Windows.h>
#include "WorkWithMas.h"
using std::cout;
using std::endl;
#ifndef FOURTHTASK
#define FOURTHTASK
void StartFourthTask();
double CheckOpmGetWtime(int masSize);
DWORD CheckGetTickCount(int masSize);
#endif // !FOURTHTASK
