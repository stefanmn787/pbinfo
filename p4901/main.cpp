
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
        if(i == 1)
        {
            stergereElement(v, i, n);

            n--;
        }
        if(i == n - 2)
        {
            stergereElement(v, i, n);

            n--;
        }
    }
    for (i = 0; i < n; i++)
        cout << v[i] << ' ';

    return 0;
}
