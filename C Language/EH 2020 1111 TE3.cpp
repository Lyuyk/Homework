#include<iostream>
using namespace std;

int prime_number(int x)
{
	bool j;//y 
	int y, i, n;//i用于循环计数，n用于素数计数
	for (i = 2, n = 0; i < x; i++)
	{
		if ((x % i) == 0)
		{
			n++;
		}
	}
	j = n;
	return j;//if true,then it is not a prime number
}

int main()
{
	int n;
	cin >> n;
	if (n < 0)
		cout << 0;
	else if (n == 0)
		cout << 2;
	else
	{
		n++;
		for (; (prime_number(n) != 0); n++){}
			cout << n;
	}
	return 0;
}