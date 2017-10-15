#include "stdafx.h"
#include "ThirdTask.h"

void StartThirdTask()
{
	int mas[1000];
	time_t rtdStart, rtdFinish, rtdDifference;
	FillMas(mas, 1000);
	rtdStart = __rdtsc();
	SumMas(mas, 1000);
	rtdFinish = __rdtsc();
	rtdDifference = rtdStart - rtdFinish;
	std::cout << "Третий таск. Функция _rdtsk. " << rtdDifference << std::endl;

	LARGE_INTEGER liStart, liFinish, liDifference;
	QueryPerformanceCounter(&liStart);
	SumMas(mas, 1000);
	QueryPerformanceCounter(&liFinish);
	liDifference.QuadPart = liFinish.QuadPart - liStart.QuadPart;
	std::cout << "Третий таск. Функция QueryPerformanceCounter. " << liDifference.QuadPart << std::endl;
}


