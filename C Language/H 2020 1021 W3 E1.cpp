#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "请输入被除数和除数（都需为整数）：" << endl;
	cin >> a >> b;
	c = a / b;
	d = a % b;
	cout << "商及余数分别为：" << c <<" "<< d <<endl;
	return 0;
}