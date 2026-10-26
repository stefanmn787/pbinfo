#include <iostream>

using namespace std;

int nrcif(int n){
    int ap=0;
    while(n!=0)
    {
        ap++;
        n /= 10;
    }
    return ap;
}

int main()
{
    int n,i,ap,s=0,x=0;
    cin >> n;
    for(i=1; i <= n ;i++)
    {
        cin >> x;
        ap=nrcif(x);
    if(ap >= 2 && ap <= 6 && ap % 10 == 0)
        s++;
    }
    cout << s;
    return 0;
}
