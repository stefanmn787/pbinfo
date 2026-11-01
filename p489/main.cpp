#include <iostream>

using namespace std;

int main()
{
    int n,i,j,a[1000];
    cin >> n;
    for(i = 1 ; i <= n; i++)
        cin >> a[i];
    i=1;
    j=n;
    while(i<j)
    {
        cout<<a[i]<<' '<<a[j]<<' ';
    i++;
    j--;
    }

    if(n%2!=0) cout<<a[n/2+1];

    return 0;
}
