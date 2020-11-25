#include<iostream>
using namespace std;

int isprime(int x)//ËØÊıÅĞ¶¨;if true,it is a prime number
{
	int i;
	bool j = 1;
	for (i = 2; i <= floor(sqrt(x)); i++)
	{
		if (x % i == 0)
		{
			j = 0; break;
		}
	}
	return j;
}

int main()
{
	int y;
	cin >> y;
	y = isprime(y);
	cout << y;
}