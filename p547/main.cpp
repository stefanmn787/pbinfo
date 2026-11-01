#include <iostream>

using namespace std;

int main()
{
    int n, i, a[1000], maxim = 1, minim = 1000000,s=0,s1=0;
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
    s = maxim - minim;
    for(i = 0 ; i < n; i++)
    {
        if(a[i] == s)
            s1++;
    }
    cout << s1;
    return 0;
}
