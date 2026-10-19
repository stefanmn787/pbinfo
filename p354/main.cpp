#include <iostream>

using namespace std;

int main()
{
   int n,i,x,maxi=-1000000000;
   cin >> n;

   for( i = n ; i >= 1; i--){
        cin >> x;
        if(maxi < x)
            maxi=x;
    }
   cout << maxi;
    return 0;
}
