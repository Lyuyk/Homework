#include<iostream>
using namespace std;

int isprime(int x)
{
	int i;
	bool j=1;
	for (i = 2; i < floor(sqrt(x)); i++)
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
	int x;
	cin >> x;
	
	if (x < 2)
	{
		cout << "It isn't a prime number."; return 0;
	}
	
	if (isprime(x) != 0)
	{
		cout << "It is a prime number.";
	}
	else
	{
		cout << "It isn't a prime number.";
	}
	return 0;
}