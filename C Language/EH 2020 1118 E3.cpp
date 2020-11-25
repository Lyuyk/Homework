#include<iostream>
using namespace std;

bool Valid(int n)
{
    // 请在此提供实现代码 
    int i;
    bool j = 0;
    while (n > 0)
    {
        i = n % 10;
        if (i == 3 || i == 4)
        {
            j = 1;
            break;
        }
        else
            n /= 10;
    }
    return j;
}

int main()
{
    int n;
    // 从命令行读入一个int型数值
    // 这个数取自测试集的输入
    cin >> n;
    if (Valid(n))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
}