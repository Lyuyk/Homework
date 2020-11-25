#include<iostream>
#include<iomanip>
using namespace std;

double function(double x)//函数体
{
	x = x * x + 4 * x - 5;
	return x;
}

int main()//调用函数
{
	double x, y = 0;
	cout << "Please enter a number x:";
	cin >> x;
	y = function(x);
	cout << '\n' << "（保留到小数点后六位）" << "x^2+4x-5= " << fixed << setprecision(6) << y << endl;
	return 0;
}