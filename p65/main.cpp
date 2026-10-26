#include <iostream>

using namespace std;

int main()
{
   bool ok = 0;
   long long n,s=1,c=0;
   cin >> n;
   while(n!=0)
   {
       c = n % 10;
       if(c % 2 != 0)
        s= s * c, ok=1;
       n /= 10;
   }
   if(ok == 0)
    cout << -1;
   else cout << s;
    return 0;
}
