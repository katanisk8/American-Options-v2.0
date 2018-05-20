#ifndef HEADER_H_MATH
#define HEADER_H_MATH 

#include <cmath>
#include <random>

namespace Math
{
	double PI = 3.14159265358979323846;

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

	double Density(double val)
	{
		std::default_random_engine generator;
		std::normal_distribution<double> distribution(val);

		return distribution(generator);
	}
}

#endif HEADER_H_MATH