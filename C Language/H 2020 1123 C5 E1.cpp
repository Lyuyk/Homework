#include<iostream>
using namespace std;

int main()
{
	int arr[10] = { 0 };//��ʼ������
	int n,i;//n Ϊ[0,9]��Χ�ڵ�����,i �������
	cin >> n;
	while (n!=-1)
	{
		if (n >= 0 && n <= 9)
		{
			arr[n]++;
			cin >> n;
		}
		else//��������Ƿ�Ϸ���
		{
			cout << "Your last enter is illegal! Please restart and try again." << endl; return 0;
		}
	}
	for (i = 0; i < 10; i++)//�������
	{
		cout << "���� " << i << " ���ֵĴ���Ϊ��" << arr[i] << endl;
	}
	return 0;
}