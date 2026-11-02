#include <iostream>

using namespace std;

int main()
{
    int n, i, v[201], c = 0;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> v[i];
    for(i = 0; i < n / 2; i++)
    {
       // if(cmmdc(a[i], a[n - i - 1]))
           // c++;
        int a = v[i], b = v[n - i - 1];
        int r = a % b;
        while(r != 0)
        {
            a = b;
            b = r;
            r = a % b;
        }
        if(b == 1)
            c++;
    }
    cout << c;

    return 0;
}
