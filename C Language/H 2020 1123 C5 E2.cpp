#include<iostream>
using namespace std;

int main()
{
	int arr[201] = { 0 };
	int i,n,m;//i ���ڼ���/�������,n ��������,m Ϊ n �ı��� 
	for (i = 2; i < 201; i++)
	{
		arr[i] = i;//�������Ӧλ���ó�ֵ
	}
	for ( n = 2, i = 2; n < 99; n++)//�������
	{
		for (m = 1, m = n * i; m < 200; i++)
		{
			arr[m] = 0;
			m = n * i;//�ú�������ж�m���ٶ�������������ⷢ������дԽ��
		}
		i = 2;//���һ����ʼ��
	}
	for (i = 2; i < 200; i++)//�������
	{
		if (arr[i] != 0)
			cout << i << " ";
	}
	return 0;
}