#include <iostream>

using namespace std;

int sumcif(int n) {
     int s = 0 ;
     while(n != 0)
     {
         s = s + n % 10;
         n /= 10;
     }
     return s;
}

int nrcif(int n){
    int ap = 0;
    while (n != 0)
    {
        ap++;
        n /= 10;
    }
    return ap;
}

int main()
{
    int n;
    cin >> n;
    int ap = nrcif(n);
    if (ap % 2 == 1){
        cout << "NU";
        return 0;
    }

    int c = n;
    for(int i = 1;i <= ap / 2;i++)
        c = c/10;

    int cc=n,a = 0,p=1;
    for(int i = 1;i <= ap / 2;i++){
        a = (cc % 10) * p + a;
        p *= 10;
        cc /= 10;
    }
    int sc=sumcif(c),scc=sumcif(a);
    if(sc == scc)
    {
        cout << sc;
    }
    else cout << "NU";
    return 0;
}
