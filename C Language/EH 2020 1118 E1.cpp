#include <iostream>
using namespace std;

double FactorialSum(int n)
{
    // ���ڴ��ṩʵ�ִ���
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
    // �������ж���һ��int����ֵ
    // �����ȡ�Բ��Լ�������
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