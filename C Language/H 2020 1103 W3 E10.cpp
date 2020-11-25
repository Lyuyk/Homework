#include<iostream>
using namespace std;

int main()
{
	int n = 0, i = 0;
	int sum = 0;//n为被判数，i用作穷举，sum判断完数
	for (n = 2; n < 1000; n++)
	{
		//sum = 0;
		for (i = 1; i < n; i++)
		{
			if (n % i == 0)
				sum += i;
	    }
		if (sum == n)//判断是否为完数
		{
			cout << n << ",its factors are 1";
			for (i = 2; i < n; i++)
			{
				if (n % i == 0)
					cout << "," << i;
			}
			if (i = n)
				cout << endl;//输出完因数后换行
		}
	}
	return 0;
}