#include <iostream>

using namespace std;

int main()
{
    int i,n,min,max,x;
    cin >> n;
    for(i=1;i<=n;i++)

        cin>> x;
    while(x!=0)
    {
        if(min>x)
        min=x;
        if(max<x)
            max=x;
    }

    cout << min+max;
    return 0;
}
