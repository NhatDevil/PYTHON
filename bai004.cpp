#include <bits/stdc++.h>

using namespace std;

int u[1000000], v[1000000], dem, a[100000], m, n, k;

int main() {
    cin >> n;
    cin >> m;
    for(int i = 0; i<n; i++){
    	cin >> a[i];
	}
    for(int i = 0; i<m; i++){
    	cin >> u[i];
    	cin >> v[i];
	}
	for(int i = 0; i<m; i++){
		k = 0;
		dem = 0;
		for(int j = u[i] - 1 ; j <= v[i] - 1; j++){
			k = k + a[j];
		}
		for (int j = 2; j <= sqrt(k); j++) {
        	if (k % j == 0) dem++;
		}
    	if(dem==0) cout << "1"
      	else cout << "0"
	}
}
