#include<iostream>
using namespace std;

bool Valid(int n)
{
    // ���ڴ��ṩʵ�ִ��� 
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
    // �������ж���һ��int����ֵ
    // �����ȡ�Բ��Լ�������
    cin >> n;
    if (Valid(n))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
}