#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c;
	d = a;
	a = c;
	c = d;
	cout << a << b << c << endl;
	return 0;
}