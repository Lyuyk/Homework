#include<iostream>
using namespace std;

int elimination(int arr[],int x)
{
	int i = 0, j = 1, a, n = 0;//n��ʾ����
	a = (arr[i]--);
	x--;
	for (;i<x;i++)
	{
		if (arr[j] == arr[i])
		{
			arr[j] = a;//��һ��֮ǰ�����ڵ�ֵ
			j++;
		}
		else
		{
			j++;
			i++;
		}
	}
	for (i = 0; i < x; i++)
	{
		if (arr[i] != a)
		{
			n++;
		}
	}
	return n;
}

int main()
{
	int x,n, i = 0;
	//int arr[100] = { 0 };
	int arr[19] = { 2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10 };
	//cout << "Please enter your array��";
	//cin >> x;
	//while (cin >> n)
	//while (cin >> n)
	//{
	//	if (n != '\n')
	//	{
	//		arr[i] = n;
	//		i++;
	//	}
	//	else
	//		break;
	//}
	cout<<"ɾ�������������ݸ���Ϊ��"<<elimination(arr,x=19);
	return 0;
}