#include <iostream>

using namespace std;

int main()
{
    int n,a[1000],i,si=0,sp=0;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
    {
        if(a[i] % 2 == 0)
            sp++;
        else si++;
    }
    if(sp > si)
        cout << sp - si;
    else if(sp == si)
        cout << sp - si;
    else cout << si - sp;
    return 0;
}
