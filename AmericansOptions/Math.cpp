#include "stdafx.h"
#include "Math.h"

namespace Math
{
	double Sqrt(double val)
	{
		return sqrt(val);
	}

	double Exp(double val)
	{
		return exp(val);
	}

	double Pow(double val, double exponent)
	{
		return pow(val, exponent);
	}

	double Log(double val)
	{
		return log(val);
	}

	double Cdf(double val)
	{
		return 0.5 * erfc(-val * 1.0 / sqrt(2.0));
	}

	double Round(double val, int digits)
	{
		return val;
	}

	bool IsNaN(double val)
	{
		return isnan(val);
	}
}