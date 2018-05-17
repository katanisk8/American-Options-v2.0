#pragma once
class BtIntegralFunction
{
private:
	double CalculateUnderIntegral(double r, double sigma, double t, double ksi, double d2);
public:
	double Calculate(int n, double T, double r, double sigma, double t, double d2);
};

