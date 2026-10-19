#include <iostream>

using namespace std;

int main()
{
    long long s=0, n;

    cin >> n;
    while(n != 0)
    {
        s = s + n;
        n /= 10;
    }
    cout << s;
    return 0;
}
