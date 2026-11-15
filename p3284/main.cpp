#include <iostream>

using namespace std;

int main()
{
    int n, i , v[22], maxi1 = -1, mini1 = 1000000;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n; i = i + 2)
    {
        if(maxi1 < v[i])
            maxi1 = v[i];
    }
    for (i = 1; i < n; i = i + 2)
    {
        if(v[i] >= 10 && v[i] <= 99)
        {
            if(mini1 > v[i])
                mini1=v[i];
        }
    }
    if(mini1 == 1000000)
        mini1 = -1;
    cout << maxi1 << ' ' << mini1;
    return 0;
}
