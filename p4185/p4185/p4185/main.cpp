#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;

	long double result = (c * b - d * a) / (d - c);

    long long doublePart = (long long)(result * 10) % 10 << (long long)(result * 100) % 10;

    cout << (long long)(result) << "." << (abs)((long long)(result * 10) % 10) << (abs)((long long)(result * 100) % 10);

    return 0;
}