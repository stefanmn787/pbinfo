#include <iostream>

using namespace std;

int main()
{
    int n,i,a[1000];
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> a[i];
    for(i = 1; i <= n; i++)
        if(i % 2 == 0)
        cout << a[i] << ' ';
    cout << endl;

    for(i = n; i >= 1; i--)
        if(i % 2 != 0)
        cout << a[i] << ' ';
    return 0;
}
