#include <iostream>

using namespace std;

int main()
{
    int n, maxi = -1000001;
    cin >> n;
    if(n == 0)
    {
        cout << "NU EXISTA" ;
        return 0;
    }
    while( n != 0)
    {
        if(n > maxi)
            maxi = n;
        cin >> n;
    }
    cout << maxi;
    return 0;
}
