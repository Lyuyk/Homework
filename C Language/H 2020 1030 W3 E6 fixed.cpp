#include<iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "please enter (x,y):";
	cin >> x >> y;
	if (x <= 1 && x >= -1 && y <= 1 && x >= -1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}