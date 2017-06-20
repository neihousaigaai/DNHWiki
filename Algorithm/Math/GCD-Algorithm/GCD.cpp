#include <iostream>
#include <cmath>
using namespace std;

int a, b;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	cin >> a >> b;
	int sign_a = (a >= 0 ? 1 : -1);
	int sign_b = (b >= 0 ? 1 : -1);
	
	cout << gcd(abs(a), abs(b)) << endl;
}
