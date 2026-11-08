#include <iostream>

using namespace std;

int main()
{
    int n, i, a[201], m = 0, s = 0, c = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];

    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
            s = s + a[i];
            c++;
    }

    m = s / c;

    for (i = 0; i < n; i++)
    {
        if(a[i] == 0)
            a[i]=m;
    }

    for (i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}
