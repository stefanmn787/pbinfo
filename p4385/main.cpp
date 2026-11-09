#include <iostream>

using namespace std;

void stergereElement(int *v, int poz, int n)
{
    for (int i = poz; i < n - 1; i++)
        v[i] = v[i + 1];
}

int main()
{
    int n, i, j, v[1000], mini = 2000000000;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if(mini > v[i])
            mini = v[i];
    }

    for (i = 0; i < n; i++)
    {
        if(mini == v[i])
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
