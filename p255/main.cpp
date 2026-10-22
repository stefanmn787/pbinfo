#include <iostream>

using namespace std;

int main()
{
   int n,i,s,a=1,b=1,c;
   cin >> n;
   cout << a <<  ' ' << b << ' ';
   for (i=3;i<=n;i++)
   {
       c=a+b;
       cout << c << ' ';
       a=b;
       b=c;
   }
    return 0;
}
