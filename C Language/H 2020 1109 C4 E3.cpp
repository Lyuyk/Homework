#include<iostream>
using namespace std;

int statistic(_int64 N,int d)//N为给定一个被检索的数；d用于判断每位数与输入数是否相等
{   
	_int64 n, tmp;
	int i;//做计数用
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
	int m = 0, d;//m用于输出；d用于判断每位数与输入数是否相等
	_int64 n;//n为给定一个被检索的数
	cout << "请输入一个正整数:";
	cin >> n;
	if (n <= 0)
		cout << "输入数据不合法!";
	else
	{
		cout << "输入一个需要统计的整数:";
		cin >> d;
		m = statistic(n, d);
		cout << "该整数出现的次数为:" << m << endl;
	}
	return 0;
}