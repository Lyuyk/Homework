#include<iostream>
#include<iomanip>
using namespace std;

double fuc(double x,int n)//x根号里，n根号外
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
	cout << "请输入x，n：";
	cin >> x >> n;
	m = fuc(x, n);
	cout <<"计算结果为（精确到小数点后两位）："<<fixed<<setprecision(2)<<m;
	return 0;
}
