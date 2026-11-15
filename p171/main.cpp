#include <iostream>

using namespace std;

int main()
{
    int n, i, c = 0,minic = 10000000, x, y = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        y = x;
        while(x != 0)
        {

            c = x % 10;
            x /= 10;
        }
        if(c < minic)
            minic = c;
    }
    cout << minic;
    return 0;
}
