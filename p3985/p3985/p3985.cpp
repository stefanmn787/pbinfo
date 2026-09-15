#include <iostream>
using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x >= 10 && x <= 99)
            s = s + x;
    }
    cout << s;
    return 0;
}