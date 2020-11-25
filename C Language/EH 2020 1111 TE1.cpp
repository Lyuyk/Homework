#include<iostream>
using namespace std;

int t(long long num)
{
	long long i, n = 1;
	if (num < 10)
		return num;
	do {
		i = num % 10;
		num /= 10;
		if (i != 0)
			n *= i;
	} while (num > 0);
	t(n);
	
}
int main()
{
	long long n;
	cin>>n;
	n=t(n);
	cout << n;
	return 0;

}