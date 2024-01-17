#include <iostream>
using namespace std;

void swap(int &a, int &b){
	int tam = a;
	a = b;
	b = tam;
}

void SapXepTangDan(int x[], int n) {
	for(int i = 0; i < n-1; i ++){
		int giatrinhonhat = i;
		for(int j = i + 1; j < n; j++){
			if (x[j] < x[giatrinhonhat]){
				giatrinhonhat = j;
			}
		}
		swap(x[i], x[giatrinhonhat]);
	}
}
void printmang(int x[], int n) {
	for(int i = 0; i < n; i++) {
		cout <<" "<< x[i]  ;
	}
}
int main() {
	int x[100], n;
	do {
			cout<< "Nhap vao so luong phan tu" ;
		cin >> n;
	} while(n<1 || n > 100);
	for ( int i = 0; i <n ; i++){
		cout << "Nhap phan tu thu "<< i ;
		cin >> a[i];
	}
	SapXepTangDan(int x[], int n);
	printmang(x, n);
}
