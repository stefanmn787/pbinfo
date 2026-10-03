#include <iostream>

using namespace std;

int main()
{
   int a ,b ,c,p=0,i=0;
   cin >> a >> b >> c;
     if(a % 2 == 0)
     {
         p++;
     }
     else i++;
     if (b % 2 == 0)
     {
         p++;
     }
     else i++;
     if(c % 2 == 0)
     {
         p++;
     }
     else i++;
     if(i > p) {
        cout << "impare";
     }
     else cout << "pare";
    return 0;
}
