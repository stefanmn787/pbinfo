#include <iostream>

using namespace std;

int main()
{
    int n, i, nrd = 0;
    cin >> n;
    for (i = 2; i <= n; i += 2)
    {
        if(n % i == 0)
            nrd++;
    }
    cout << nrd;
    return 0;
}
