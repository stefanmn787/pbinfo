#include <iostream>
using namespace std;

int main() {
    int zi, luna, an;
    long long cnp;

    cin >> zi >> luna >> an;
    cin >> cnp;

    int s = cnp / 1000000000000LL;


    int zz = (cnp / 10000000000LL) % 100;
    int ll = (cnp / 100000000LL) % 100;
    int aa = (cnp / 1000000LL) % 100;

    int anNastere;

    if (s == 1 || s == 2)
        anNastere = 1900 + aa;
    else
        anNastere = 2000 + aa;


    int varsta = an - anNastere;

    if (varsta > 18 ||
        (varsta == 18 && (luna > ll || (luna == ll && zi >= zz))))
        cout << "Major";
    else
        cout << "Minor";

    return 0;
}
