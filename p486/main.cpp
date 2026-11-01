#include <iostream>

using namespace std;

int main()
{
    int n, i, a[1000], maxim = 1, minim = 1000000;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        if(minim > a[i])
            minim = a[i];
    }
    for (i = 0; i < n; i++)
    {
        if(maxim < a[i])
            maxim = a[i];
    }
    cout << minim << ' ' << maxim;
    return 0;
}
