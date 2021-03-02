#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r;
		cin >> l >> r;
		// find the minimum sum in the range
		long long min_value = 2 * l;
		// find the maximum sum in the range
		long long max_value = 2 * r;
		// find the number of elements between the minimum and maximum as a range (inclusive)
		cout << max_value - min_value + 1 << '\n';
	}
	return 0;
}
