#include <iostream>

using namespace std;

int nrcif(int n){
    int ap=0;
    while(n > 9)
    {
        if(n % 10 != 0)
        {
            return -1;
        }
        ap++;
        n /= 10;
    }
    if(n != 1)
    {
        return -1;
    }
    return ap + 1;
}

int main()
{
    int n,i,ap,s=0,x=0;
    cin >> n;
    for(i=1; i <= n ;i++)
    {
        cin >> x;
        ap=nrcif(x);
    if(ap >= 2 && ap <= 6)
        s++;
    }
    cout << s;
    return 0;
}
