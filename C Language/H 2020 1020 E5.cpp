#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout << "请输入一个三位数：" << endl;
	cin >> a;
	b = a / 100;
	c = ((a % 100) /10);
	d = ((a % 100) % 10);
	e = d * 100 + c * 10 + b;
	cout << e << endl;

	return 0;
}