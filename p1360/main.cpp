#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "NU ESTE NOROCOS";
    } else {
        int primul = (n + 1) / 2;

        for (int i = 0; i < n; i++) {
            cout << primul + i;
            if (i < n - 1)
                cout << ' ';
        }
    }

    return 0;
}
