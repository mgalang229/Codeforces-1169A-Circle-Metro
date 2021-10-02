#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a, x, b, y;
	cin >> n >> a >> x >> b >> y;
	// test case 2:
	// 10 stations
	// station 2 to station 1
	// 2, 3, 4, 5, 6, 7, 8, 9, 10, 1
	// station 9 to station 10
	// 9, 8, 7, 6, 5, 4, 3, 2, 1, 10
	// simulate the process as stated in the problem and check if they will meet
	int v = a;
	int d = b;
	bool meet = false;
	while (v != x && d != y) {
		if (v != x) {
			v = (v < n ? v + 1 : 1);
		}
		if (d != y) {
			d = (d > 1 ? d - 1 : n);
		}
		if (v == d) {
			meet = true;
			break;
		}
	}
	cout << (meet ? "YES" : "NO") << '\n';
	return 0;
}
