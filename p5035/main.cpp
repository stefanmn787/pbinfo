#include <iostream>
using namespace std;

int main() {
   int i,n;
   cin >> n;
   for(i=1;i<=n;i++)
   {
       if(i % 2 == 0)
       {
           cout << i << ' ';
       }
   }
   cout << endl;
   for (i=1;i<=n;i++)
   {
       if(i % 3 == 0)
       {
           cout << i << ' ';
       }
   }
   cout << endl;
   for (i=1;i<=n;i++)
   {

       if(i % 2 == 0 || i % 3 == 0 && i % 6 != 0){
        cout << i << ' ';
       }
   }

   return 0;
}
