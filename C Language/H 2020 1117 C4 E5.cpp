#include<iostream>
using namespace std;

int square(int i)
{
	if (i == 1)
	{
		return 1;
	}
	return i*i+square(i-1);//�ݹ����
}

int main()
{
	int n, m;
	cout << "������һ��������n�Լ��㵽��nƽ���ĺͣ�";
	cin >> n;
	if (n < 1)
		cout << "���벻�Ϸ���";
	else
	{
		m = square(n);
		cout <<"��ƽ��֮��Ϊ��"<< m;
	}
	return 0;
}