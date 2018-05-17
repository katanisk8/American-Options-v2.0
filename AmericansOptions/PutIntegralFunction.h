#pragma once
class PutIntegralFunction
{
private:
	double CalculateUnderIntegral(double r, double S, double K, double t, double ksi, double Btksi, double sigma);
public:
	double Calculate(int n, double T, double r, double sigma, double t, double S, double K, double Btksi);
};

