#include<iostream>
using namespace std;

double cr(double x, double y)
{
	y = 4 / 3 * 3.14 * (x*x*x);
	return(y);
}

int main()
{
	double r, v, M;
	cin >> r;
	M = cr(r, v);
	cout << M << endl;
	return 0;
}