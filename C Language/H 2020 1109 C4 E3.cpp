#include<iostream>
using namespace std;

int statistic(_int64 N,int d)//NΪ����һ��������������d�����ж�ÿλ�����������Ƿ����
{   
	_int64 n, tmp;
	int i;//��������
	n = N;
	for (i = 0; n > 0; n / 10)
	{
		tmp = n % 10;
		if (tmp == d)
			i++;
		n /= 10;
	}
	return i;
}

int main()
{
	int m = 0, d;//m���������d�����ж�ÿλ�����������Ƿ����
	_int64 n;//nΪ����һ������������
	cout << "������һ��������:";
	cin >> n;
	if (n <= 0)
		cout << "�������ݲ��Ϸ�!";
	else
	{
		cout << "����һ����Ҫͳ�Ƶ�����:";
		cin >> d;
		m = statistic(n, d);
		cout << "���������ֵĴ���Ϊ:" << m << endl;
	}
	return 0;
}