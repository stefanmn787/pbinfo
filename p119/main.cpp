#include <iostream>

using namespace std;

int main()
{
    int n, v[1002], i, maxi1 = 0, maxi2 = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n; i++)
    {
        if(v[i] > maxi1)
        {
            maxi2 = maxi1;
            maxi1 = v[i];
        }
        else if(v[i] > maxi2)
        {
            maxi2 = v[i];
        }
    }
    cout << maxi1 << ' ' << maxi2;
    return 0;
}
