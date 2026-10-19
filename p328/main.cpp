#include <iostream>

using namespace std;

int main()
{
    int i,n;
    cin >> n;
    for(i=2;i<=n;i=i+2)
    cout <<i<<' ';
    if(i>n)
    return 0;
}
