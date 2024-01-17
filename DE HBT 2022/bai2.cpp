#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int L, R, dem, uoci;
	cin >> L;
	cin >> R;
	dem = 0;
	for(int i = L; i <= R; i++){
		uoci = 0;
		for(int j = 0; j<i; j++) {
			if(i % j == 0) {
				uoci = uoci + j;
			}
		}
		if( uoci > i) {
			dem = dem + 1;
		}
	}
	cout << dem;
	return 0;
}
