#include <iostream>

using namespace std;

int main()
{
   long long n,i,x;
   cin >> n;
   for(i=1; i <= n; i++)
    {
       cin >> x;
    if(i * i * i == x)
        cout << "DA" << ' ';
    else cout << "NU" << ' ';
    }
    return 0;
}
