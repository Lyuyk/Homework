#include<iostream>
using namespace std;

double solve_positive(double a, double b, double c,double delta)
{
	double x1=0, x2=0;
	x1 = ((-b) + sqrt(delta)) / (2 * a);
	x2 = ((-b) - sqrt(delta)) / (2 * a);
	cout << "x1=:" << x1 << " x2=:" << x2;
	return 0;
}

double solve_zero(double a, double b, double c, double delta)
{
	double x = 0;
	x = ((-b) + sqrt(delta)) / (2 * a);
	cout << "x=:" << x;
	return 0;
}
double solve_negetive(double a, double b, double c, double delta)
{
	double x1 = 0, x2 = 0;
	x1 = ((-b) + sqrt(delta)) / (2 * a);
	x2 = ((-b) - sqrt(delta)) / (2 * a);
	cout << "x1=:" << x1 << " x2=:" << x2;
	return 0;
}
int main()
{
	double a, b, c,delta;
	cin >> a >> b >> c;
	delta = (pow(b, 2) - 4 * a * c);
	if (delta > 0)
	{
		solve_positive(a, b, c, delta);
	}
	else if (delta == 0)
	{
		solve_zero(a, b, c, delta);
	}
	else
		cout << "There is no solution.";
	return 0;
}