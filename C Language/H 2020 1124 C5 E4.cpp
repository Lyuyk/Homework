#include<iostream>
using namespace std;

int judge(int arr[],int n)//�ж��������
{
	bool j = 0;//�������򣬷�֮����
	int i = 1, a;
	for (a=arr[0]; i < n; i++)
	{
		if (arr[i] > a)
		{
			j = 1; break;
		}
		else if (arr[i] < a)
		{
			j = 0; break;
		}
		else;
	}
	return j;
}

void insert_plus(int arr[],int x,int n)//x Ϊ��������insert & print��n Ϊԭ�������鳤��
{
	int i=0,t=0;//���ڼ���
	for (i = n; i != 0; i--)
	{
		if (arr[i] >= x)
		{
			t = i;
			for (; i!=0 ;i--)
			{
				arr[i+1]=arr[i];
			}
			arr[t] = x;//����x�����������һλ��x������λ��
			break;
		}
	}
	
}
void insert_sub(int arr[], int x, int n)//����
{
	int i = 1,t = 0;
	for (i = n; i != 0; i--)
	{
		if (arr[i] <= x)
		{
			t = i;//����λ��
			for (; i != 0; i--)
			{
				arr[i + 1] = arr[i];
			}
			arr[t] = x;//����xС����������һλ��x������λ��
			break;
		}
	}
}

void print(int arr[], int n)
{
	int i;//�������
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int n,i,x,a;//insert a number x
	int arr[100] = { 0 };
	
	cout << "Please enter arraysize(n<=100):";
	cin >> n;
	
	cout << "Please enter an array(n<=100):";
	for (i = 0; i < n; i++)
	{
		cin >> a;
		arr[i] = a;
	}
	
	cout << "Please enter a number to insert:";
	cin >> x;
	int y;
	y = judge(arr, n);
	cout << y << endl;
	if (judge(arr,n) == 1)
		insert_plus(arr, x, n);
	else
	    insert_sub(arr, x, n);//�������
	
	print(arr, n+=1);//��ӡ����
	
	return 0;
}