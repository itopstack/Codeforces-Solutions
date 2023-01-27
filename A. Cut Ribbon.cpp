#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

#define int long long int
#define double long double

using namespace std;

void solve() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	
	// find sum of x + y + z = n from ax + by + zc = n
	int ans = 0;
	for (int i = 0; i * a <= n; i++) {
		for (int j = 0; i * a + j * b <= n; j++) {
			int k = n - i * a - j * b;
			if (k % c == 0) {
				k /= c;
				ans = max(ans, i + j + k);
			}
		}
	}
	
	cout << ans;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
//		freopen("output.txt", "w", stdout);
	#endif
	
	int t = 1;
	// cin >> t;
	while (t--) solve();
	
	return 0;
}