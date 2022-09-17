#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x = 3.251, y = 0.325, z = 0.446 * pow(10, -4), s;
    int i;
    s = pow(2, pow(y, x)) + pow(pow(3, x), y) - (y * (atan(z-1/(double)3))) / (double)(abs(x) + 1/(double)pow(y, 2) + 1);

    cout << s << endl;

    // to hold console open
    cin >> i;

}