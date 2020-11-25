#include<iostream>
using namespace std;

int main()
{
	int i, x, y, z;//百分位x，十分位y，个位z；
	cout << "水仙花数分别有:";
	for (i=100;i < 1000; i++)
	{
		x =  i / 100;
		y = (i % 100) / 10;
		z =  i % 10;
		if (i == pow(x, 3) + pow(y, 3) + pow(z, 3))
			cout << i << " ";
	}
	return 0;
}