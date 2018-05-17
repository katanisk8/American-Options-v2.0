#include "stdafx.h"
#include "EuropeanPut.h"

double EuropeanPut::Calculate(double K, double S, double r, double t, double sigma)
{
	Normal normalDistribution = new Normal();
	IntegralPoints integralPoints = new IntegralPoints();

	double integralPointD1 = integralPoints.CalculateIntegralPointD1(S, K, r, sigma, t);
	double integralPointD2 = integralPoints.CalculateIntegralPointD2(integralPointD1, sigma, t);
	double distributionD1 = normalDistribution.Density(-integralPointD1);
	double distributionD2 = normalDistribution.Density(-integralPointD2);

	return K * Math.Exp(-r * t) * distributionD2 - (S * distributionD1);
}
