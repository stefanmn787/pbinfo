#include <iostream>

using namespace std;

int main()
{
   long long n,s=0,i;
   cin >> n;
   for(i=1;i<=n;i++)
   {
       if( i * i <= n)
       {
       s = s + i * i;
       }
   }
   cout << "Rezultatul este "<< s;
    return 0;
}
