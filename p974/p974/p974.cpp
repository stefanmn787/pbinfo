#include <iostream>
using namespace std;

// s = (n / k) * sumaGauss(k - 1) + sumaGauss(r); unde r = n % k;

long long gauss(long long n) {
    return n * (n + 1) / 2;
}

int main() {
    long long n, k;
    cin >> n >> k;

    long long s = (n / k) * gauss(k - 1) + gauss((n % k));

    cout << s;
    
    return 0;
}