#pragma once

#include <cmath>
#include <random>

namespace Math
{
	static double PI = 3.14159265358979323846;

	double Sqrt(double val);
	double Exp(double val);
	double Pow(double val, double exponent);
	double Log(double val);
	double Cdf(double val);
	double Round(double val, int digits);
	bool IsNaN(double val);
}