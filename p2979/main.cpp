#include <iostream>

using namespace std;

int main()
{
    long long n,s=0,c=0;
    cin >> n;
    while(n!=0)
    {
        c=n%10;
        if(c >= 3 && c <= 7)
            s=s+c;
        n /= 10;
    }
    cout << s;
    return 0;
}
