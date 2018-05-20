#include "stdafx.h"
#include "IntegralPoints.h"
#include "Math.h"



double IntegralPoints::CalculateIntegralPointD1(double S, double B, double r, double sigma, double t)
{
	return CalculateD1Numerator(S, B, r, sigma, t) / CalculateD1Denominator(sigma, t);
}

double IntegralPoints::CalculateIntegralPointD2(double d1, double sigma, double t)
{
	return d1 - CalculateD1Denominator(sigma, t);
}

double IntegralPoints::CalculateD1Numerator(double S, double B, double r, double sigma, double t)
{
	return Math::Log(S / B) + (r + (0.5 * Math::Pow(sigma, 2))) * t;
}

double IntegralPoints::CalculateD1Denominator(double sigma, double t)
{
	return sigma * Math::Sqrt(t);
}
