#include <iostream>

using namespace std;

int main()
{
    int n, a[201], c = 0,i,x,y,j,r;
    cin >> n;

    for  (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int x = a[i], y = a[j];

            while (y != 0)
            {
                r = x % y;
                x = y;
                y = r;
            }

            if (x == 1)
                c++;
        }
    }

    cout << c;
    return 0;
}
