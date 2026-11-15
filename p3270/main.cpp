#include <iostream>

using namespace std;

int main()
{
    int n, i, nrd = 0;
    cin >> n;
    for (i = 2; i <= n ; i += 2)
    {
        if(n % i == 0)
            nrd = nrd + i;
    }
    cout << nrd;
    return 0;
}
