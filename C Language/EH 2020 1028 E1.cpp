#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	double b;
	double i = 1.0375;
	cin >> n;
	//for (i = 1; i <= n; i++)
	//{
	//	a=a*(1.0375)
	//}
	//cout << "ÇëÊäÈë½ð¶î£º" << endl;
	b = 100000 * pow(i,n);
	cout << fixed << setprecision(2) << b ;
	return 0;
}