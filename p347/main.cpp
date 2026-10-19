#include <iostream>

using namespace std;

int main()
{
    int i,n,x=0,mini=1000000,maxi=0;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> x;

        if(mini>x)
            mini=x;
        if(maxi<x)
            maxi=x;
    }
    cout << mini+maxi;
    return 0;
}
