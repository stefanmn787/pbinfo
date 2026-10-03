#include <iostream>

using namespace std;

int main()
{
   int a ,b ,c,minim;
   cin >> a >> b >> c;
     minim = a;

    if (b < minim)
        minim = b;

    if (c < minim)
        minim = c;

    cout << minim;

    return 0;
}
