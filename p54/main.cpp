#include <iostream>

using namespace std;

int main()
{
    int n,max=1;
    cin >> n;
    if(n==0)
    {
        cout << "NU EXISTA";
    }
    while(n!=0)
    {
        cin >> n;
        if(n>max)
            max=n;
    }
    cout << n;
    return 0;
}
