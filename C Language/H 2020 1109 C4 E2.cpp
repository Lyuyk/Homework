#include<iostream>
using namespace std;

int prime_number(int x)
{
	bool j;
	int i,n;//i����ѭ��������n������������
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
	int x, y, i, n;//i������������;x,y�޶��жϷ�Χ
	cout << "����������������x,y(x<y)�޶�����������Χ:";//the scale of prime numbers
	cin >> x >> y;
	if (x > 0 && y > 0 && x < y)//�ж����������Ƿ�Ϸ�
	{
		for (i = 0, n = x; n <= y; n++)//�������ݺϷ�����ѭ�����ú����жϸ�����Χ�������Ƿ�Ϊ����
		{
			if (prime_number(n) == 0)
			{
				i++;
			}
		}
		cout << "�÷�Χ����������Ϊ:" << i << endl;
	}
	else cout << "�������ݲ��Ϸ���";
	return 0  ;
}