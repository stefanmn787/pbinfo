#include <iostream>

using namespace std;

int main()
{
    int n, i, a[1000],p1=0,p2=0;
    cin >> n;

    for(i = 0; i < n; i++)
        cin >> a[i];

    for(i = 0; i < n ; i++)
    {
        if(i % 2 == 0)
            p1 = i;
        continue;
    }

    for(i = n;i > 1; i--)
    {
        if(i % 2 == 0)
            p2 = i;
        continue;
    }

    if(p1 > p2)
    {
        for(i = p2; i <= p1; i++)
            cout << a[i] << ' ';
    }

    if(p1 < p2)
    {
        for(i = p1; i <= p2; i++)
            cout << a[i] << ' ';
    }
    return 0;
}
