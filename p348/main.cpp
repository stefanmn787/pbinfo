#include <iostream>

using namespace std;

int main()
{
   int n,p,i;
   cin >> n >> p;
   for( i=1; i <= p; i = i * n)
   {
       cout << i << ' ';
   }
    return 0;
}
