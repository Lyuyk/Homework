#include <iostream>
using namespace std;

int ProductCalculation(int n) {
    // 请在此添加实现代码
    int x, m;
    m = n;
    for (x = 2; n != 1; n--)
    {
        x *=2;
    }
    return m * x;
}

int main() {
    int n;
    // 从命令行读入一个int型数值
    // 这个数取自测试集的输入
    cin >> n;
    cout << ProductCalculation(n) << endl;
}