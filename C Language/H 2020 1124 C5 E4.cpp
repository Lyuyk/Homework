#include<iostream>
using namespace std;

int judge(int arr[],int n)//判断升序或降序
{
	bool j = 0;//真则升序，反之降序
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

void insert_plus(int arr[],int x,int n)//x 为插入数，insert & print，n 为原输入数组长度
{
	int i=0,t=0;//用于计数
	for (i = n; i != 0; i--)
	{
		if (arr[i] >= x)
		{
			t = i;
			for (; i!=0 ;i--)
			{
				arr[i+1]=arr[i];
			}
			arr[t] = x;//将比x大的数都后移一位后将x赋到空位上
			break;
		}
	}
	
}
void insert_sub(int arr[], int x, int n)//降序
{
	int i = 1,t = 0;
	for (i = n; i != 0; i--)
	{
		if (arr[i] <= x)
		{
			t = i;//保存位置
			for (; i != 0; i--)
			{
				arr[i + 1] = arr[i];
			}
			arr[t] = x;//将比x小的数都后移一位后将x赋到空位上
			break;
		}
	}
}

void print(int arr[], int n)
{
	int i;//控制输出
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
	    insert_sub(arr, x, n);//插入操作
	
	print(arr, n+=1);//打印操作
	
	return 0;
}