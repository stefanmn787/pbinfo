#include <iostream>

using namespace std;

void stergereElement(int *v, int poz, int n)
{
    for (int i = poz; i < n - 1; i++)
        v[i] = v[i + 1];
}

bool prim(int x)
{
    if(x < 2)
        return false;
    if(x == 2)
        return true;
    if(x % 2 == 0)
        return false;
    for(int i = 3; i * i <= x; i += 2)
        if(x % i == 0)
            return false;
    return true;
}

int main()
{
    int v[1000], i, n;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];

    for (i = 0; i < n; i++)
    {
        if(prim(v[i]))
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
