#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long x, r, n, i;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> x;

        r = sqrt(x);

        if (r * r == x)
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
    }
    return 0;
}
