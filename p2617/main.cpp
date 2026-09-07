#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int horizontalCuts = n - 1;
    long long verticalCuts = (long long)(m - 1) * (long long)n;

    cout << horizontalCuts + verticalCuts << endl;

    return 0;
}
