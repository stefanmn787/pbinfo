#include <iostream>

using namespace std;

int main()
{
    int n, a, m = 1,i;
    cin >> n >> a;
    for(i = 0; i < a; i++)
        m *= 10;
    cout << n * m;
    return 0;
}
