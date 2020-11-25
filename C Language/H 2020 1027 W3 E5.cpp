#include<iostream>
using namespace std;

int main()
{
	double i;
	char t;
	cout << "please enter your score:" << endl;
	cin >> i;
	for (t = 'A'; i < 90; t++)
	{
		i = i + 10;
	}
	if (t <= 'E');
	else
		t = 'E';
	cout << "your grade is:" << t << endl;
}