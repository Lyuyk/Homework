#include<iostream>
using namespace std;

int main()
{
	int a;
	bool b;
	cout << "请输入一个整数：" << endl;
	cin >> a;
	b = a;
	cout<<"赋值给布尔型变量，再赋回给整形变量得到的值为：" << b << endl;
	return 0;
}