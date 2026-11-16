#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("maximpar.in");
ofstream fout("maximpar.out");

int main()
{
    int n, i, maxim = -1, c = 0, v[201];
    fin >> n;
    for (i = 0; i < n; i++)
        fin >> v[i];
    for (i = 0; i < n; i++)
    {
        if(maxim < v[i] && v[i] % 2 == 0)
            maxim = v[i];
    }
    for (i = 0; i < n; i++)
    {
        if(v[i] == maxim)
            c++;
    }
    if(maxim % 2 == 0)
    {
    cout << maxim << ' ' << c++;
    }
    else cout << "-1" << ' '<< c;
    return 0;
}
