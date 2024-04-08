// StaticLib_Calculator.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include <cmath>

static int moveDotFromDouble(double a)
{
	int integPart;
	double doublePart;
	do
	{
		integPart = (int)a; // (int)136.78 = 136;
		doublePart = a - integPart; // 136.78 - 136 = 0.78;

		if (doublePart == 0)
		{
			return a;
		}
		else
		{
			a *= 10;
		}
	} while (1);
}

//Возвращает true, если возможно возвести a в степень b, иначе false
//
bool pow(double a, double b, double& retValue)
{
	if (a < 0)
	{
		if (moveDotFromDouble(b) % 2 == 0)
			return false;
	}

	retValue = exp(b * log(a));

	return true;
}

double Add(double a, double b)
{
	return a + b;
}

double Dec(double a, double b)
{
	return a - b;
}

double Mul(double a, double b)
{
	return a * b;
}
