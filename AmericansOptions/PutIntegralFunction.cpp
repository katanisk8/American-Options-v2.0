#include "stdafx.h"
#include "PutIntegralFunction.h"
#include "IntegralPoints.h"


double PutIntegralFunction::CalculateUnderIntegral(double r, double S, double K, double t, double ksi, double Btksi, double sigma)
{
	double integralPointD1 = IntegralPoints().CalculateIntegralPointD1(S, Btksi, r, sigma, t - ksi);
	double integralPointD2 = IntegralPoints().CalculateIntegralPointD2(integralPointD1, sigma, t - ksi);
	double distribution = Normal().Density(-integralPointD2);

	return r * K * Math.Exp(-r * (t - ksi)) * distribution;
}

double PutIntegralFunction::Calculate(int n, double T, double r, double sigma, double t, double S, double K, double Btksi)
{
	double result = 0;

	for (int i = 0; i < n; i++)
	{
		double h = (T / n);
		double ksi = i * h;

		result += CalculateUnderIntegral(r, S, K, t, ksi, Btksi, sigma) * h;
	}

	return result;
}
