#include <iostream>
using namespace std;

unsigned long gausGaus(unsigned long x) {
	unsigned long aux = x * (x + 1) / 2;
	if (aux % 3 == 0) return (aux / 3) * (x + 2);
	else return ((x + 2) / 3) * aux;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		unsigned long x;
		cin >> x;

		cout << gausGaus(x) << " ";
	}

	return 0;
}