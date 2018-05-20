#pragma once

class BtCalculator
{
private:

	double CalculateBtK_1(double sigma, double K, double dist, double d1, double r, double tau, double d2);
	double CalculateBt(double sigma, double K, double dist, double d1, double r, double t, double d2, int n, double T);

public:
	double CalculateBtK1(double r, double sigma, double t, double K, double S, int n, double T);
	double CalculateBtK(double r, double sigma, double t, double K, double S, int n, double T, double BtK_1);
};

