#include<iostream>
using namespace std;

int isprime(int x)//�����ж�;if true,it is a prime number
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
	int i, n=200,m=1,t;//i ���ڼ���/�������,n �����޶��жϷ�Χ
	
	for (i = 2; i < 201; i++)//O(n)
	{
		arr[i] = i;//�������Ӧλ���ó�ֵ
	}
	
	for (i = 2; i <= n; i++)//i ���ڼ��������������;O(nlog(n))
	{
		if (arr[i] == 0)//����������
			i++;
		if (isprime(i) != 0)//�ҵ�һ�������󣬶����ı�������
		{
			for (m=2*i; m <= n; m+=i)
			{
				arr[m] = 0;
			}
		}
	}
	
	cout << "[2,200]�������У�";
	for (i = 2; i <= 200; i++)//�������O(n)
	{
		if (arr[i] != 0)
			cout << i << " ";
	}
	return 0;
}