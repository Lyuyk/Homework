#include <iostream>
using namespace std;

int gcd(int a, int b)//
{
	if (a > b)
		swap(a, b);
	if (a % b == 0)
		return b;
	else
		return gcd(a, a % b);
}

int gbs(int a, int b)
{
	int i=2;
	if (a > b)
		swap(a, b);
	return a * b / gcd(a, b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << gbs(a, b);
	return 0;
}