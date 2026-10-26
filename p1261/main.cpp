#include <iostream>

using namespace std;

int main()
{
    int n, i=0;
    cin >> n;
    while(n!=0)
    {
        if(n % 2 ==0)
          i++;
          cin >> n;
    }
    if (i==0)
        cout << "NU EXISTA";
    else cout << i;

    return 0;
}
