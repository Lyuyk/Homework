#include<iostream>
using namespace std;

int isprime(int x)//素数判定;if true,it is a prime number
{
	int i;
	bool j=1;
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
	int arr[201] = { 0 };
	int i, n=200,m=1,t;//i 用于计数/控制输出,n 用于限定判断范围
	
	for (i = 2; i < 201; i++)//O(n)
	{
		arr[i] = i;//对数组对应位置置初值
	}
	
	for (i = 2; i <= n; i++)//i 用于检查素数，后置零;O(nlog(n))
	{
		if (arr[i] == 0)//跳过置零数
			i++;
		if (isprime(i) != 0)//找到一个素数后，对它的倍数置零
		{
			for (m=2*i; m <= n; m+=i)
			{
				arr[m] = 0;
			}
		}
	}
	
	cout << "[2,200]间素数有：";
	for (i = 2; i <= 200; i++)//控制输出O(n)
	{
		if (arr[i] != 0)
			cout << i << " ";
	}
	return 0;
}