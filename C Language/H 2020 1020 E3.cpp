#include<iostream>
using namespace std;
int main()
{
	float a=0.033;
	float b;
	cout << "�������" << endl;
	cin >> b;
	b = b * ( 1 + a) *(1 + a) * (1 + a);
	cout << b << endl;
	return 0;
}