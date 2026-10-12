#include <iostream>
using namespace std;

int prima(int x) {
	return 0;
}

int main() {
	int minim = 10;
	int n, x, maxi = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;

		int copie = x;
		int p = 0;
		
		while (copie != 0) {
			p = copie % 10;
			copie /= 10;
		}

		if (p < minim) {
			minim = p;
			maxi = x;
		}

		if (minim == p) {
			if (x > maxi) {
				maxi = x;
			}
		}
	}
	cout << maxi;

	return 0;
}