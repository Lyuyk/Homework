#include<iostream>
using namespace std;

int LeapYear(int Y)//if true,then it is leapyear
{
	bool i = 0;
	if (Y % 4 == 0 && Y % 100 != 0 && Y > 0)
		i = 1;
	else if (Y % 400 == 0 && Y > 0)
		i = 1;
	return i;
}

int WhatDay(int y,int m,int d)//y=year;m=month;d=day;
{
	int i,D=0;//i month;D for print
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//��һ����0���Ա������±���·ݶ�Ӧ
	if (y == 1)
		month[2] += 1;
	for (i = 1, m -= 1; m > 0; i++)
	{
		D += month[i];
		m--;//�����·����Լ��Ա��ж�
	}
	D += d;
	return D;
}

void Date(int n, int y, int D)
{
	int i;//i count month;d remaining days
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (y==1)
		month[2]+=1;
	for (i = 1; D > month[i]; i++)
	{
		D -= month[i];
	}
	cout << "������Ϊ��" << n << " �� " << i << " �� " << D << " ��";
}

int main()
{
	int y, m, d, D;//yΪ�������,mΪ�����·ݣ�dΪ��������, DΪ�ڼ���
	int x;//����������
	cout << "��ֱ����������������������ж���һ��Ϊ��һ��ڼ��գ���";
	cin >> y >> m >> d;
	x = WhatDay(LeapYear(y), m, d);
	cout << "������Ϊ����ĵ� " << x << " ��" << endl;
	cout << "��ֱ�������������ڼ��գ�";
	cin >> y >> D;
	Date(y,LeapYear(y),D);
	return 0;
}