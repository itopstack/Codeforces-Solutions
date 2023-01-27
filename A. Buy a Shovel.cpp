#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>

#define int long long int
#define double long double

using namespace std;

void solve() {
	int k, r;
	cin >> k >> r;
	int count = 0;
	
	while (true) {
		count++;
		
		if ((k * count) % 10 == 0 || (k * count) % 10 == r) {
			cout << count;
			break;
		}
	}
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