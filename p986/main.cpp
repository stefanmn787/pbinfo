#include <iostream>

using namespace std;

int main()
{
    int n, i, c=0;
    float a[201], st, dr;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    if(a[0] > a[n - 1])
    {
        st = a[n - 1];
        dr = a[0];
    }
    else
    {
        st = a[0];
        dr = a[n - 1];
    }

    for(i = 1; i < n - 1;i++)
    {
        if(a[i] < st || a[i] > dr)
            c++;
    }
    cout << c;

    return 0;
}
