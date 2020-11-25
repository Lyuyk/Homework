#include<iostream>
using namespace std;
//int main()
//{
//	int a, b;
//	c = add(a, b)
//		cout << "a+b=" << c << endl;
//	return 0;
//}
//int add(int x, int y);
//{
//	z = x + y;
//	return(z);
//}

int main()
{
	int add(int x, int y, int z);
	int a, b;
	int c = 0;
	cin >> a >> b;
	c = add(a, b,c);
		cout << "a+b=" << c << endl;
	return 0;
}
int add(int x, int y, int z)
{
	z = x + y;
	return(z);
}
