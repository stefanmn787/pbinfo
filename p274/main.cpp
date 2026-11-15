#include <iostream>

using namespace std;

int main()
{
    int n, v[1002], i, mini1 = 10000000, mini2 = 10000000, mini3 = 10000000;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n; i++)
    {
        if(v[i] < mini1)
        {
           mini3 = mini2;
           mini2 = mini1;
           mini1 = v[i];
        }
        else if(v[i] < mini2)
        {
           mini3 = mini2;
           mini2 = v[i];
        }
        else if(v[i] < mini3)
        {
            mini3=v[i];
        }
    }
    cout << mini3 << ' ' << mini2 << ' ' << mini1;
    return 0;
}
