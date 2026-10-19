#include <iostream>

using namespace std;

int main()
{
   int a,r,n;
    cin >>a>>r>>n;

    for (int i=0;i<n;i++) {
        cout <<
        a+i*r;
        if (i<n-1)
            cout << ' ';
    }
    return 0;
}
