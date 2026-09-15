#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    for (i = 2; i <= n; i += 2)
    {
        cout << i << ' ';
    }

    cout << endl;
    for (i = 3; i <= n; i += 3)
    {
        cout << i << ' ';
    }

    cout << '\n';
    for (i = 1; i <= n; i++)
    {
        if (i % 6 == 0) {
            continue;
        }

        if (i % 2 == 0 || i % 3 == 0) {
            cout << i << ' ';
        }
    }
    return 0;
}