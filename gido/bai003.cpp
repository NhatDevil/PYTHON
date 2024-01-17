#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, dem, dem1, dem2, k;
	cout << "Nhap so phan tu cua mang ";
	cin >> n ;
	int a[100];
	for(int i = 0; i<n; i++) {
		cout << "Nhap phan tu thu "<< i ;
		cin >> a[i];
	}
	dem = 0;
	dem1 = 0;
	dem2 = 0;
	for(int i = 0; i<n; i++) {
		if(a[i] % 2 == 0) {
			dem = dem + 1;
		} else {
			dem1 = dem;
			dem = 0;
			if(dem1 > dem2) {
				dem2 = dem1;
			}
		}
	}
	if(dem2 == 0) {
		cout << dem1;
	} else if(dem1==0){
		cout << dem;
	} else {
		cout << dem2;
	}
}	

