#include<iostream>
using namespace std;

int main()
{
	_int64 n, sum = 0, tmp = 1;
	for (n = 1; n <= 20; n++)
	{
		tmp *= n;
		sum += tmp;
	}
	cout<< "1到20的阶乘之和为：" << sum << endl;
	return 0;
}