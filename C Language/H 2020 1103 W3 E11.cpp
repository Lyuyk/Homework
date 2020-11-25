#include<iostream>
using namespace std;

int main()
{
	int i;
	float x = 2, y = 1;//x分子，y分母
	float sum = 0, m = 0,tmp = 0;
	sum = x / y;

	for (i = 1; i < 20; i++)
	{
		m = y;
		y = x;
		x += m;
		tmp = x / y;
		sum = sum + tmp;
	}
	cout << "数列前20项之和为（精确到小数点后四位）：" <<sum << endl;
	return 0;
}