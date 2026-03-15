#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
using namespace std;


int test;
int a[1000], b[1000];
double x[1000];

int input()
{
	cin >> test;

	for (int i = 0; i < test; ++i)
	{
		cin >> a[i] >> b[i];
	}

	return 0;
}

int solve(int i)
{
	long long A = a[i];
	long long B = b[i];

	double l = -1e9;
	double r = 1e9;
	
	for (int i = 0; i < 100; ++i)
	{
		double x_m = (r + l) / 2;
		double ANS = A * x_m + B;
		if ((ANS) > 0)
			r = x_m;
		else
			l = x_m;
	}

	x[i] = l;

	return 0;
}


int output()
{
	for (int i = 0; i < test; ++i)

		cout << x[i] << "\n";

	return 0;
}

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	input();

	for (int i = 0; i < test; ++i)
		solve(i);

	output();


}