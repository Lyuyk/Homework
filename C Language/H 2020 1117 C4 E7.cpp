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
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//第一个存0，以便数组下标跟月份对应
	if (y == 1)
		month[2] += 1;
	for (i = 1, m -= 1; m > 0; i++)
	{
		D += month[i];
		m--;//加完月份数自减以便判断
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
	cout << "该日期为：" << n << " 年 " << i << " 月 " << D << " 日";
}

int main()
{
	int y, m, d, D;//y为输入年份,m为输入月份，d为输入日期, D为第几日
	int x;//用于输出结果
	cout << "请分别输入年月日三个数（以判断这一天为这一年第几日）：";
	cin >> y >> m >> d;
	x = WhatDay(LeapYear(y), m, d);
	cout << "该日期为该年的第 " << x << " 日" << endl;
	cout << "请分别输入年份数及第几日：";
	cin >> y >> D;
	Date(y,LeapYear(y),D);
	return 0;
}