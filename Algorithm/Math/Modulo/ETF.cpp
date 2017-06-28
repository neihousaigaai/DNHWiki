#include <bits/stdc++.h>
#define int int
#define pb push_back
#define ln "\n"
using namespace std;
 
const int MAX = 10000; // maximum 1000000

typedef vector<int> vii;

int n;
bool check[MAX + 1];
vector<int> prime;

void sieve() { // prime sieve
	for (int i = 1; i <= MAX; i++)
		check[i] = false;
	
	for (int i = 2; i <= MAX; i++) {
		if (check[i] == false) {
			prime.push_back(i);
			for (int j = i * 2; j <= MAX; j += i) check[j] = true;
		}
	}
}

int phi(int n) {
	int res = n;
	for (int i = 0; i < prime.size(); i++) {
		if (prime[i] > n) break;
		
		if (n % prime[i] == 0) {
			res = (res * (prime[i] - 1)) / prime[i];
		}
	}
	return res;
}
 
int main() {
	sieve();
	cin >> n;
	cout << phi(n) << endl;
} 
