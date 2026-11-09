#include <iostream>

using namespace std;

void stergereElement(int *v, int poz, int n)
{
    for (int i = poz; i < n - 1; i++)
        v[i] = v[i + 1];
}

int main()
{
    int v[100], i, n;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];

    for (i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0)
        {
            stergereElement(v, i, n);
            i--;
            n--;
        }
    }
    for (i = 0; i < n; i++)
        cout << v[i] << ' ';

    return 0;
}
