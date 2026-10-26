#include <iostream>

using namespace std;

int main()
{
   int n,i,s,f1=1,f2=1,f3;
   cin >> n;
   cout << f1 << ' ';
   if(n > 1) cout << f2 << ' ';
   for (i=3;i<=n;i++)
   {
       f3=f1+f2;
       cout << f3 << ' ';
       f1=f2;
       f2=f3;
   }
    return 0;
}
