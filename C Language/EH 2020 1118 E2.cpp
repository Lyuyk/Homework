#include<iostream>
using namespace std;

int Fun(int x)
{
    // ���ڴ��ṩʵ�ִ���
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
    // �������ж���һ��int����ֵ
    // �����ȡ�Բ��Լ�������
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