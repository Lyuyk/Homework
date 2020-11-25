#include <iostream>
using namespace std;

double FactorialSum(int n)
{
    // 请在此提供实现代码
    int sum, s, t;
    for (sum = 0;n != 0;n--)
    {
        for (s = 1,t = 1;t <= n; t++)
        {
            s *= t;
        }
        sum += s;
    }
    return sum;
}





int main()
{
    int n;
    // 从命令行读入一个int型数值
    // 这个数取自测试集的输入
    cin >> n;
    if (n < 10)
    {
        cout << FactorialSum(n) << endl;
    }
    else
    {
        cout << "out of range" << endl;
    }
}