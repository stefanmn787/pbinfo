#include <iostream>

using namespace std;

int main()
{
    int n, a[501],i,s=0;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];

     for (i = 0; i < n / 2; i++) {
        if ((a[i] / 10) % 10 == (a[n - 1 - i] / 10) % 10)

            s++;
        }
    cout << s;
    return 0;
}
