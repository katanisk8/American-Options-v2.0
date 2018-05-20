#include "stdafx.h"
#include <iostream>
#include "Calculator.h"

int main()
{
	double r = 0.05;
	double sigma = 0.2;
	double t = 1;
	double K = 45;
	double S = 45;
	int k = 100;
	int n = 4;
	double T = 1;

	Calculator calc;

	auto results = calc.Calculate(r, sigma, t, K, S, k, n, T);

	for (auto itr = results.begin(); itr != results.end(); ++itr)
	{
		printf("k=%d  Bt=%f  P=%f\r\n", (*itr).ResultNumber, (*itr).BtRoundedValue, (*itr).PutRoundedValue);
	}
	
	return 0;
}
