#include <iostream>

using namespace std;

int main()
{
    int poz, n, i, v[100];
    cin >> poz >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];

    for (i = poz; i < n - 1; i++)
        v[i] = v[i + 1];

    for (i = 0; i < n - 1; i++)
        cout << v[i] << ' ';

    return 0;
}
