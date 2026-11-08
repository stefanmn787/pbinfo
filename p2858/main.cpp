#include <iostream>

using namespace std;

int main()
{
     int a[100], n, i, s, S, p ,P;
    cin >> n;
    s = 0;
    S = 0;
    p = 0;
    P = 0;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = n; i >= 1; i--)
        cout << a[i]<< ' ';
    cout << endl;
    for (i = 1; i <= n; i++)
        if (a[i] % 2 == 0)
            s = s + a[i];
                cout << s;
    cout << endl;
    for(i=1;i<=n;i++)
        if(i%2==0)
            S=S+a[i];
                cout<<S;
    cout<<endl;
    for (i = 1; i <= n; i++)
        if(a[i] % 10 == 0)
            p = p + 1;
                cout << p;
    cout << endl;
    for (i = 1; i <= n; i++)
        if (a[i] % 3 == 0 && i % 2 == 1)
            P = P + a[i];
        cout << P;
    return 0;
}
