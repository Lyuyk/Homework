#include <iostream>
using namespace std;

int ProductCalculation(int n) {
    // ���ڴ����ʵ�ִ���
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
    // �������ж���һ��int����ֵ
    // �����ȡ�Բ��Լ�������
    cin >> n;
    cout << ProductCalculation(n) << endl;
}