#include <iostream>

using namespace std;

int main()
{
    int n,i;
   cin>>n;
   for(i=1;i<=n;i=i+1)
   {   for(i=1;i<=n;i=i+1)
       if(i%2==0) cout<<i<<" ";
       cout<<endl;

       for(i=1;i<=n;i=i+1)
       if(i%3==0) cout<<i<<" ";
       cout<<endl;

       for(i=1;i<=n;i=i+1)
       if((i%2==0 || i%3==0)&& (i%6!=0)) cout<<i<<" ";
   }
    return 0;
}
