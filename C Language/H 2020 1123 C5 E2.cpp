#include<iostream>
using namespace std;

int main()
{
	int arr[201] = { 0 };
	int i,n,m;//i 用于计数/控制输出,n 用于置零,m 为 n 的倍数 
	for (i = 2; i < 201; i++)
	{
		arr[i] = i;//对数组对应位置置初值
	}
	for ( n = 2, i = 2; n < 99; n++)//置零操作
	{
		for (m = 1, m = n * i; m < 200; i++)
		{
			arr[m] = 0;
			m = n * i;//置后操作，判断m后再对数组操作，避免发生数组写越界
		}
		i = 2;//检查一遍后初始化
	}
	for (i = 2; i < 200; i++)//控制输出
	{
		if (arr[i] != 0)
			cout << i << " ";
	}
	return 0;
}