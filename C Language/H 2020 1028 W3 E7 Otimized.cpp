#include<iostream>
using namespace std;
int main()
{
	int n,t=0;
	cout << "Please enter an integer:" << endl;
	cin >> n;
	t = (!(n % 3)) + (!(n % 5) << 1) + (!(n % 7) << 2);
	switch (t)
	{
	case 0:cout << "n" << endl; break;
	case 1:cout << "3" << endl; break;
	case 2:cout << "5" << endl; break;
	case 3:cout << "3 5" << endl; break;
	case 4:cout << "7" << endl; break;
	case 5:cout << "3 7" << endl; break;
	case 6:cout << "5 7" << endl; break;
	case 7:cout << "3 5 7" << endl; break;
	}
}