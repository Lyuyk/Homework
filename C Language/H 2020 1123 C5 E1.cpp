#include<iostream>
using namespace std;

int main()
{
	int arr[10] = { 0 };//初始化数组
	int n,i;//n 为[0,9]范围内的整数,i 控制输出
	cin >> n;
	while (n!=-1)
	{
		if (n >= 0 && n <= 9)
		{
			arr[n]++;
			cin >> n;
		}
		else//检查输入是否合法；
		{
			cout << "Your last enter is illegal! Please restart and try again." << endl; return 0;
		}
	}
	for (i = 0; i < 10; i++)//输出控制
	{
		cout << "数字 " << i << " 出现的次数为：" << arr[i] << endl;
	}
	return 0;
}