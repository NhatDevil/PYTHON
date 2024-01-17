#include <bits/stdc++.h>

using namespace std;

int M, N, temp, a[10000];

int main() {
	cin >> N;
	cin >> M;
	temp = M;
	for(int i = 0; i<M; i++) {
		cin >> a[i];
	}
	sort(a, a + M,greater<int>());
	for(int i = 0; i<N; i++) {
		for(int j = i + N; j<M; j++) {
			if(a[i] + a[j] <= a[0]) {
				a[i] = a[i] + a[j];
				a[j] = 0;
				temp = temp - 1;
			}
		}
	}
	sort(a, a + temp - 1,greater<int>());
	while(a[N] > 0) {
		for(int i = 0; i<N; i++) {
			if(temp - i < N) {
				break;
			} else {
				a[i] = a[i] + a[temp - i];
				a[temp - i] = 0;
				temp = temp - 1;
			}
		}
		sort(a, a + temp - 1,greater<int>());
		if(a[N] == 0) break;
	}
	sort(a, a + temp - 1,greater<int>());
	cout << a[0];
	return 0;
}
