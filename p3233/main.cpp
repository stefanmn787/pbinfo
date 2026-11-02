#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], i;
    cin >> n;

     for(i = n; i >= 1; i--)
        if(i % 2 == 1) cout << i << ' ';

    return 0;
}
