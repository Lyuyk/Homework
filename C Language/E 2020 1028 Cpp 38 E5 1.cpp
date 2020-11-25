#include<iostream>
using namespace std;

int main()
{
	int i = 0, b = 0, c = 0;
	i = 3.5 * 3 + 2 * 7 - 'a';
	b = 26 / 3 + 34 % 3 + 2.5;
	c = 45 / 2 + (int)3.14159 / 2;
	cout << i << " " << b << " " << c << " " << endl;
}