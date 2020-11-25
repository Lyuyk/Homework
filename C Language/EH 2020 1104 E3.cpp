#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t, n, i, k;
	cout << "Please enter an integer:";
	cin >> t;
	n = t;
	k = t;
	for (i = 0; n > 0; i++)
	{
		n /= 10;
	}
	cout << "the number is :" << i << endl;

	for (;;)
	{
		cout << t%10<<" ";
		t /= 10;
		if (t <= 0) {
			break;
		}
	}
	cout << endl;

	while (k)
	{
		cout << (k % 10);
		k = k / 10;
	}

	cout << endl;
	

	return 0;
}