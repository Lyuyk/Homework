#include<iostream>
#include<iomanip>
using namespace std;

double fuc(double x,int n)//x�����n������
{
	int i;//i count
	for (i = 1; i <= n; i++)
	{
		x = sqrt(i + x);
	}
	return x;
}

int main()
{
	int n;
	double x, m;//m for printing
	cout << "������x��n��";
	cin >> x >> n;
	m = fuc(x, n);
	cout <<"������Ϊ����ȷ��С�������λ����"<<fixed<<setprecision(2)<<m;
	return 0;
}
