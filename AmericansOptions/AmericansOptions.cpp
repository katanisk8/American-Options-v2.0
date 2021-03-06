#include "stdafx.h"
#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
	double r;
	double sigma;
	double t;
	double K;
	double S;
	int k;
	int n;
	double T;

	cout << "Podaj r: ";
	cin >> r;
	cout << "Podaj sigma: ";
	cin >> sigma;
	cout << "Podaj t: ";
	cin >> t;
	cout << "Podaj K: ";
	cin >> K;
	cout << "Podaj S: ";
	cin >> S;
	cout << "Podaj k: ";
	cin >> k;
	cout << "Podaj n: ";
	cin >> n;
	cout << "Podaj T: ";
	cin >> T;

	printf("\r\n");

	printf("Wyniki:\r\n");
	Calculator calc;
	auto results = calc.Calculate(r, sigma, t, K, S, k, n, T);

	for (auto itr = results.begin(); itr != results.end(); ++itr)
	{
		printf("k=%d  Bt=%f  P=%f\r\n", (*itr).ResultNumber, (*itr).BtRoundedValue, (*itr).PutRoundedValue);
	}

	printf("\r\n");
	system("pause");

	return 0;
}
