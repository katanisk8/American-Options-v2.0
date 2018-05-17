#pragma once
class IntegralPoints
{
private:
	double CalculateD1Numerator(double S, double B, double r, double sigma, double t);
	double CalculateD1Denominator(double sigma, double t);

public:
	double CalculateIntegralPointD1(double S, double B, double r, double sigma, double t);
	double CalculateIntegralPointD2(double d1, double sigma, double t);
};

