#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// group the same multiple of numbers by assigning its smallest factor
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] % a[i] == 0) {
				a[j] = a[i];
			}
		}
	}
	// sort the array
	sort(a, a + n);
	int cnt = 1;
	// count the remaining prime numbers
	for (int i = 0; i < n - 1; i++) {
		if (a[i] != a[i + 1]) {
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;	
}
