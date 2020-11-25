#include <iostream>
#include <cmath>
using namespace std;

#define A (4 * x * x * x + 3 * x * x + 2 * x + 1)
#define B (12 * x * x + 6 * x + 2)

int main()
{

    double x = -1, a;
    do
    {
        a = x;
        x = a - (A / B);
    } while (A == 0);
    //while (fabs(x - a) < 1e-5);

        cout << x << endl;
}

