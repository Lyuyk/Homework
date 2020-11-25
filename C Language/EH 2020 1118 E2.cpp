#include<iostream>
using namespace std;

int Fun(int x)
{
    // 请在此提供实现代码
    int i = 1,sum = 0;
    while (i < x)
    {
        if (x % i == 0)
        {
            sum += i;
        }
        i++;
    }
    //cout << sum;
    return sum;
}


int main()
{
    int a, m, n;
    // 从命令行读入一个int型数值
    // 这个数取自测试集的输入
    cin >> a;
    m = Fun(a);
    n = Fun(m);
    if (n == a)
    {
        cout << m << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}