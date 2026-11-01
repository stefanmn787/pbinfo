#include <iostream>

using namespace std;

int main()
{
     int a[1001], n, i, mx, mn, imax, imin;
    cin >> n;

    for(i = 0; i < n; i++)
        cin >> a[i];

    mn = a[1];
    mx = a[1];

    for(i = 0; i < n; i++)

        if(a[i] >= mx) {mx = a[i]; imax = i;}

    for(i = 0; i < n; i++)

        if(a[i] <= mn) {mn = a[i]; imin = i;}

    if(imax > imin)
    {
        for(i = imin; i <= imax; i++)
            cout << a[i] << ' ';
    }
    if(imax<imin)
    {
        for(i = imax; i <= imin; i++)
            cout<< a[i] << ' ';
    }

    return 0;
}
