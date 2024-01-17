#include <bits/stdc++.h>
using namespace std;
int n, s, UCLN, BCNN, a[100000], tam;
int main() {
	cin >> n;
    cin >> s;
	for(int i = 0; i<n; i++) {
		cin >> a[i];
		}
	for(int i = 1; i<n; i++) {
		tam = UCLN;
		UCLN = __gcd(UCLN, a[i]);
		}
	BCNN = (tam*a[n-1])/UCLN;
	s = (s + BCNN) % 7;
	cout << s;
}
