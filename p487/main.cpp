#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], i, s = 0, m = 0, e = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        s = s + a[i];
    }
    m = s / n;
    for(i = 0; i < n; i++)
    {
        if(a[i] > m)
            e++;
    }
    cout << e;
    return 0;
}
