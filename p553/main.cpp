#include <iostream>

using namespace std;

int main()
{
    int n, i, a[1000], maxim, minim, imax, imin;
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> a[i];
    minim = a[1]; imin = 1;
    maxim = a[1]; imax = 1;

    for(i = 1; i <= n; i++)

        if(a[i] > maxim) {maxim = a[i]; imax = i;}

    for(i = 1; i<= n; i++)

        if(a[i] < minim) {minim = a[i]; imin = i;}

    cout << imin << ' ' << imax;
    return 0;
}
