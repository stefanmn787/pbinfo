#include <iostream>

using namespace std;

int main()
{
    int n,s,c;
    cin>>n;
    c=n%100;
    s=c%10;
    c=c/10;
    cout<<s+c;

    return 0;
}
