#include<iostream>
#include<iomanip>
using namespace std;

double function(double x)//������
{
	x = x * x + 4 * x - 5;
	return x;
}

int main()//���ú���
{
	double x, y = 0;
	cout << "Please enter a number x:";
	cin >> x;
	y = function(x);
	cout << '\n' << "��������С�������λ��" << "x^2+4x-5= " << fixed << setprecision(6) << y << endl;
	return 0;
}