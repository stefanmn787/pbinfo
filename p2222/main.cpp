#include <iostream>

using namespace std;

int main()
{
    long long n, i, k,c=0;
    cin >> n >> k;
    while(n > 1)
    {
        c++;
        n /= 10;
    }
    cout << '1';
    for(i = 0; i < k * c; i++)
        cout << '0';
    return 0;
}
