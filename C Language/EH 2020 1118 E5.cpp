#include <iostream>
using namespace std;
int main()
{
    int a = 0, n = 0;
    double sum = 0, avg = 0;
    do
    {
        cin >> a;
        sum += a;
        n++;
    } while (a != 0);
    avg = sum / n;
    cout << "n=" << n << endl;
    cout << "avg=" << avg << endl;
    cout << "sum=" << sum;
    return 0;
}