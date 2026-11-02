#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;

    for (x = 1; x <= n / 2; x++) {
            y = n - x;
        cout << x << ' ' << y ;
        cout << endl;
    }
    return 0;
}
