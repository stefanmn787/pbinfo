#include <iostream>

using namespace std;

int main()
{
     int n;
    cin >> n;

    for (int x = 1; x <= n / 2; x++) {
        int y = n - x;
        cout << x << " " << y ;
        cout << endl;
    }
    return 0;
}
