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

const int sqrt_lim = 1000001;

set<int> prime_squares() {
	bool arr[sqrt_lim] = {false};
	
	for (int i = 2; i * i < sqrt_lim; i++) {
		
		if (!arr[i]) {
			for (int j = i*i; j < sqrt_lim; j += i) {
				arr[j] = true;
			}
		}
	}
	
	set<int> res;
	for (int i = 2; i < sqrt_lim; i++) {
		if (!arr[i]) {
			res.insert(i * i);
		}
	}
	
	return res;
}

void solve() {
	int n, num;
	cin >> n;
	set<int> sq(prime_squares());
	
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (sq.count(num)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
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