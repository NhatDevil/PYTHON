#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int X, N, a[1000], dem;
	cin >> N;
	cin >> X;
	dem = 0;
	for(int i =0; i < N ; i++) {
		cin >> a[i];
	}
	for(int i = 0; i< N -1; i++) {
		for(int j = i +1; j < N; j++) {
			if(a[i] + a[j] == X) {
				cout << i + 1 << " " << j + 1<< endl;
				dem = dem + 1;
				break;
			}
		}
		if(dem > 0) {
			break; 
		}
	}
	if(dem == 0) {
			cout << "No Solution";
		}
}
