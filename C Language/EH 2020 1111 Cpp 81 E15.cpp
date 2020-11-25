#include<iostream>
#include<cmath>
using namespace std;

int gcd(int m,int n)
{
	int t;
	if (m > n)
		swap (m,n);
	while (n != 0)
	{
		t = m%n;
		m = n;
		n = t;
		
	}


	
}


int main()
{

}