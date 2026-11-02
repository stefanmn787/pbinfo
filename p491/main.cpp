#include <iostream>

using namespace std;

int main()
{
    int n, i, a[1000],p1=-1,p2=-1,s=0;
    cin >> n;

    for(i = 0; i < n; i++)
        cin >> a[i];

    for(i = 0; i < n ; i++)
    {
        if(a[i] % 2 == 0 && p1 == -1)
        {
            p1 = i;
            p2 = i;
        } else if(a[i] % 2 == 0)
        {
            p2 = i;
        }
    }
    for (i = p1; i <= p2 && p1 > -1; i++)
    {
        s = s + a[i];
    }
    if(p1 == -1)
        cout << "NU EXISTA";
    else
        cout << s;

    return 0;
}
