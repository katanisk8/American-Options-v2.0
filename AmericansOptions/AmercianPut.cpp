#include "stdafx.h"
#include "AmercianPut.h"

double AmercianPut::Calculate(double K, double S, double r, double t, double sigma, int n, double T, double Btksi)
{
	double europeanPut = new EuropeanPut().Calculate(K, S, r, t, sigma);
	double putIntegralFunction = new PutIntegralFunction().Calculate(n, T, r, sigma, t, S, K, Btksi);

	return europeanPut + putIntegralFunction;
}
