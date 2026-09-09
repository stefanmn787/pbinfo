#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long P = 1;

    for (int i = 1; i <= n; i++) {
        P *= i * i;
    }

    cout << P;

    return 0;
}
