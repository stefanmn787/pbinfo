#include <iostream>

using namespace std;

int main()
{
     int n, a[201], c = 0, x, y, i, r;
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++) {
        x = a[i], y = a[n - 1];

        while (y != 0) {
            r = x % y;
            x = y;
            y = r;
        }

        if (x == 1)
            c++;
    }

    cout << c;
    return 0;
}
