#include<iostream>
using namespace std;

int prime_number(int x)
{
	bool j;//y 
	int y, i, n;//i����ѭ��������n������������
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
	int x, y, i, n, t, sum;//i������������;x,y�޶��жϷ�Χ,�涨����ǰt����
	sum = 0;
	//cout << "Please enter two integer x,y(x<y)to ensure the scale:";//the scale of prime numbers
	cin >> t;
	for (n = 2,i=0; i < t; n++)//ѭ�����ú����жϸ�����Χ�������Ƿ�Ϊ����
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