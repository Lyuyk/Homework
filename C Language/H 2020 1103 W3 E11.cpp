#include<iostream>
using namespace std;

int main()
{
	int i;
	float x = 2, y = 1;//x���ӣ�y��ĸ
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
	cout << "����ǰ20��֮��Ϊ����ȷ��С�������λ����" <<sum << endl;
	return 0;
}