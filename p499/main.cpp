#include <iostream>

using namespace std;

int main()
{   int n, a[201], i, j, s1 = 0, s2 = 0, c = 0, x = 0, y = 0;
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            x = a[i];
            y = a[j];
            while(x != 0)
            {
                s1 = s1 + x % 10;
                x = x / 10;
            }
            while(y != 0)
            {
                s2 = s2 + y % 10;
                y = y / 10;
            }
            if(s1 == s2)
                c++;
        }
    }
    cout << c;


    return 0;
}
