// MathFuncsDll.cpp: DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//

#include "stdafx.h"
#include "MathFuncsDll.h"
#include <stdexcept>

using namespace std;

namespace MathFuncs
{
	double MyMathFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyMathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyMathFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyMathFuncs::Divide(double a, double b)
	{
		return a / b;
	}
}


