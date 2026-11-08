#include <iostream>

using namespace std;

int main()
{
    int n, m, p = 1, c = 0;
    cin >> n >> m;
    while(p < m)
    {
        p *= n;
        c++;
    }
    cout << c;
    return 0;
}
