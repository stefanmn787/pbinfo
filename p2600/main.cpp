#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     int a, a2, a4;

    cin >> a;

    a2 = a * a;
    a4 = a2 * a2;

    double expr1 = 3 * (a2 + a4);
	double expr2 = a2 + a4 + sqrt(a2 + a4);
    double expr3 = sqrt(a2 + a4);

    cout << (int)((expr1 / expr2) + expr3);

    return 0;
}
