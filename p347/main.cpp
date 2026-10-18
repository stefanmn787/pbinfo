#include <iostream>

using namespace std;

int main()
{
    int i,n,x=0,min,max;
    cin >> n;
    for(i=1;i<=n;i++)
        cin >> x;
    while(x!=0)
    {
        if(min>x)
            min=x;
    }
    for(i=1;i<=n;i++)
        cin >> x;
    while(x!=0)
    {
        if(max<x)
            max=x;
    }
    cout << min+max;
    return 0;
}
