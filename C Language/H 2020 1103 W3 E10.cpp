#include<iostream>
using namespace std;

int main()
{
	int n = 0, i = 0;
	int sum = 0;//nΪ��������i������٣�sum�ж�����
	for (n = 2; n < 1000; n++)
	{
		//sum = 0;
		for (i = 1; i < n; i++)
		{
			if (n % i == 0)
				sum += i;
	    }
		if (sum == n)//�ж��Ƿ�Ϊ����
		{
			cout << n << ",its factors are 1";
			for (i = 2; i < n; i++)
			{
				if (n % i == 0)
					cout << "," << i;
			}
			if (i = n)
				cout << endl;//�������������
		}
	}
	return 0;
}