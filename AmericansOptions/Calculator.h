#pragma once

#include <vector>
#include "Result.h"
#include "BtCalculator.h"
#include "AmercianPut.h"

class Calculator
{
public:
	std::vector<Result> Calculate(double r, double sigma, double t, double K, double S, int k, int n, double T);

private:
	Result CalculateK0(AmercianPut putCalculator, double K, double S, double r, double t, double sigma, int n, double T);
	Result CalculateK1(BtCalculator btCalculator, AmercianPut putCalculator, double K, double S, double r, double t, double sigma, int n, double T);
};
