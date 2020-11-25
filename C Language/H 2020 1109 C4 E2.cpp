#include<iostream>
using namespace std;

int prime_number(int x)
{
	bool j;
	int i,n;//i用于循环计数，n用于素数计数
	if (x > 1)
	{
		for (i = 2, n = 0; i < x; i++)
		{
			if ((x % i) == 0)
			{
				n++;
			}
		}
		j = n;
	}
	else j = 1;
	return j;//if true,then it is not a prime number
}
int main()
{
	int x, y, i, n;//i用于素数计数;x,y限定判断范围
	cout << "请输入两个正整数x,y(x<y)限定素数搜索范围:";//the scale of prime numbers
	cin >> x >> y;
	if (x > 0 && y > 0 && x < y)//判断输入数据是否合法
	{
		for (i = 0, n = x; n <= y; n++)//输入数据合法，则循环调用函数判断给定范围的整数是否为素数
		{
			if (prime_number(n) == 0)
			{
				i++;
			}
		}
		cout << "该范围素数的数量为:" << i << endl;
	}
	else cout << "输入数据不合法！";
	return 0  ;
}