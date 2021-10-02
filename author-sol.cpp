#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a, x, b, y;
	cin >> n >> a >> x >> b >> y;
	// simulate the process as stated in the problem and check if they will meet
	a--, x--, b--, y--;
	while (true) {
		if (a == b) {
			cout << "YES" << '\n';
			return 0;
		}
		if (a == x || b == y) {
			break;
		}
		a = (a + 1) % n;
		b = (b - 1 + n) % n;
	}
	cout << "NO" << '\n';
	return 0;
}
