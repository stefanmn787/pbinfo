#include <iostream>

using namespace std;

int main()
{
   long long n,s=0,i;
   cin >> n;
   for(i=1;i<=n;i++)
   {
       s = s + i * i * i * i;
   }
   cout<< s % 10;
    return 0;
}
