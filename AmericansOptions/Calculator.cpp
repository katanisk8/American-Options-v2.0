#include "stdafx.h"
#include "Calculator.h"

std::vector<Result> Calculator::Calculate(double r, double sigma, double t, double K, double S, int k, int n, double T)
{
	BtCalculator btCalculator;
	AmercianPut putCalculator;
	std::vector<Result> results;

	results.push_back(CalculateK0(putCalculator, K, S, r, t, sigma, n, T));
	results.push_back(CalculateK1(btCalculator, putCalculator, K, S, r, t, sigma, n, T));

	for (int i = 2; i < k; i++)
	{
		Result result;

		result.ResultNumber = i;

		result.BtValue = btCalculator.CalculateBtK(r, sigma, t, K, S, n, T, results[i - 1].BtValue);
		result.BtRoundedValue = Math::Round(result.BtValue, 4);

		result.PutValue = putCalculator.Calculate(K, S, r, t, sigma, n, T, result.BtValue);
		result.PutRoundedValue = Math::Round(result.PutValue, 4);

		if (Math::IsNaN(result.BtValue))
		{
			break;
		}

		results.push_back(result);
	}

	return results;
}

Result Calculator::CalculateK0(AmercianPut putCalculator, double K, double S, double r, double t, double sigma, int n, double T)
{
	Result result;

	result.ResultNumber = 0;

	result.BtValue = K;
	result.BtRoundedValue = Math::Round(K, 4);

	result.PutValue = putCalculator.Calculate(K, S, r, t, sigma, n, T, K);
	result.PutRoundedValue = Math::Round(result.PutValue, 4);

	return result;
}

Result Calculator::CalculateK1(BtCalculator btCalculator, AmercianPut putCalculator, double K, double S, double r, double t, double sigma, int n, double T)
{
	Result result;

	result.ResultNumber = 1;

	result.BtValue = btCalculator.CalculateBtK1(r, sigma, t, K, S, n, T);
	result.BtRoundedValue = Math::Round(result.BtValue, 4);

	result.PutValue = putCalculator.Calculate(K, S, r, t, sigma, n, T, result.BtValue);
	result.PutRoundedValue = Math::Round(result.PutValue, 4);

	return result;
}


