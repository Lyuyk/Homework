#include<iostream>
using namespace std;

//if true,then it is not a prime number
int prime(int x)
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

//search the prime numbers
int gotbaha(int m)
{
	if (prime(m) != 0)
	{
		return m;
	}
}

//Print the prime number
void godbah(int x)
{
	int t, m, n;
	for (t = 2,m = 0,n = 0; t <= (x / 2); t++)
	{
		if (gotbaha(t) == 0 && gotbaha(x - t) == 0)
		{
			m = t;
			n = (x - t); 
			cout << x << "=" << m << "+" << n << endl;
		}
	}
	
}

int main()
{
	int x, m, n;//x为被判断数;m,n为俩素数
	cout << "Please enter an even number x(x>=6):";
	cin >> x;
	godbah(x);
	return 0;
}