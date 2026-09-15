#include <iostream>
using namespace std;

int main()
{
    int n, s = 0, i;
    cin >> n;

    int vf[11] = { 0 };

    vf[1] = 1;
    vf[2] = 6;
    vf[3] = 1;
    vf[4] = 6;
    vf[5] = 5;
    vf[6] = 6;
    vf[7] = 1;
    vf[8] = 6;
    vf[9] = 1;
    vf[10] = 0;

    for (i = 1; i <= n; i++)
    {
        s = s + vf[i % 10];
        s %= 10;
    }

    cout << s;

    return 0;
}