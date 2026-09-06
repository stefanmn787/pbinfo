#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,s1,s2,s3;
    cin>>a>>b>>c;
    s1=(a+b)*(b-a+1)/2;
    s2=(b+c)*(c-b+1)/2;
    s3=(a+c)*(c-a+1)/2;
    cout<<s1<<' '<<s2<<' '<<s3;
    return 0;
}
