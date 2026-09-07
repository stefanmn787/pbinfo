#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	int r;
	cin >> r;

	const double pi = atan(1) * 4;

	double area = 4 * pi * r * r;
	long double volume = area * r / 3;

	cout << int(area) << "." << int(area * 10) % 10 << int(area * 100) % 10 << " ";
	cout << (long long)(volume) << "." << (long long)(volume * 10) % 10 << (long long)(volume * 100) % 10;

	return 0;
}
