#include <iostream>

using namespace std;

int main()
{
   int n,i,x,MAX;
   cin >> n;
   MAX=1;
   for( i =1;i <= n;i++){
    cin >> x;

   if(MAX < x)
    MAX=x;
   }
   cout << MAX;
    return 0;
}
