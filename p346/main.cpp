#include <iostream>

using namespace std;

int main()
{
    int n, i, c, maxi = -1,v[1001],maxap = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0;i < n; i++)
    {
        if(maxi < v[i])
        {
            maxi = v[i];
        }
    }
    for (i = 0; i <= n; i++)
    {
        if(maxi == v[i])
            maxap++;
    }
    cout << maxi << ' ' << maxap;
    return 0;
}
