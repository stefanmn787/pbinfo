#include <iostream>

using namespace std;

int main()
{
   long long n,s=1,c=0;
   cin >> n;
   while(n!=0)
   {
       c = n % 10;
       if(c % 2 != 0)
        s= s * c;
       n /= 10;
   }
   cout << s;
    return 0;
}
