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
	int x, y, i, n, t, sum;//i用于素数计数;x,y限定判断范围,规定给定前t个数
	sum = 0;
	//cout << "Please enter two integer x,y(x<y)to ensure the scale:";//the scale of prime numbers
	cin >> t;
	for (n = 2,i=0; i < t; n++)//循环调用函数判断给定范围的整数是否为素数
	{
		if (prime_number(n) == 0)
		{
			i++;
			sum = sum + n;
			//cout << n << " ";
		}
	}
	//cout << "The quantity of prime number(s) is:" << i << endl;
	cout << sum;
	return 0;
}