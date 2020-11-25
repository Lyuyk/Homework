#include<iostream>
using namespace std;

int main()
{
	int a = 3, b = 4, c = 5;
	int v = 0, w = 0, x = 0, y = 0, z = 0;
	v = a + b < c&& b == c;
	w = a || b + c && b - c;
	x = !(x = a) && (y = b) && 0;
	y = !(a < b) && !c || 1;
	z = !(a + b) + c && b + c / 2;
	cout << v << w << y << x << z;
}