#include<iostream>
using namespace std;

int main()
{
	int i, n;
	for (i = 1, n = 1; i < 10; i++)
	{
		n = (n + 1) * 2;
	}
	cout << n;
}