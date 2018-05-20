#include "stdafx.h"
#include "EuropeanPut.h"
#include "IntegralPoints.h"

double EuropeanPut::Calculate(double K, double S, double r, double t, double sigma)
{
	double integralPointD1 = IntegralPoints().CalculateIntegralPointD1(S, K, r, sigma, t);
	double integralPointD2 = IntegralPoints().CalculateIntegralPointD2(integralPointD1, sigma, t);
	double distributionD1 = Math::Cdf(-integralPointD1);
	double distributionD2 = Math::Cdf(-integralPointD2);

	return K * Math::Exp(-r * t) * distributionD2 - (S * distributionD1);
}
