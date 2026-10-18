#include <iostream>

using namespace std;

int main()
{
   int n,i,x,MIN;
   cin >> n;
   MIN=1;
   for( i =1;i <= n;i++){
    cin >> x;
{
   if(MIN > x)
    MIN=x;
}
   }
   cout << MIN;
    return 0;
}
