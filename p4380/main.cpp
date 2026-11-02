#include <iostream>

using namespace std;

int main()
{
    int n, a[201], c = 0, i, j;
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if ((a[i] / 10) % 10 == (a[j] / 10) % 10)
                c++;

    cout << c;
    return 0;
}
