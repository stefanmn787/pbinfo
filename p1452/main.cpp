
#include <iostream>

using namespace std;

void stergereElement(int *v, int poz, int n)
{
    for (int i = poz; i < n - 1; i++)
        v[i] = v[i + 1];
}

int main()
{
    int v[1501], i, n, p;
    cin >> n >> p;
    for (i = 0; i < n; i++)
        cin >> v[i];

    for (i = 0; i < n; i++)
    {
        if(i == p)
        {
            stergereElement(v, i, n);

            n--;
        }
    }
    for (i = 0; i < n; i++)
        cout << v[i] << ' ';


    return 0;
}
