#include<iostream>
using namespace std;

int square(int i)
{
	if (i == 1)
	{
		return 1;
	}
	return i*i+square(i-1);//递归调用
}

int main()
{
	int n, m;
	cout << "请输入一个正整数n以计算到数n平方的和：";
	cin >> n;
	if (n < 1)
		cout << "输入不合法！";
	else
	{
		m = square(n);
		cout <<"其平方之和为："<< m;
	}
	return 0;
}