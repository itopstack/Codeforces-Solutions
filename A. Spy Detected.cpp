#include <bits/stdc++.h>

#define int long long int
#define double long double
#define print(a) for (auto x: a) cout << x << " "; cout << endl

using namespace std;

const bool LOOP_TEST_CASES = true;

void solve() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	for (int i = 1; i < n; i++) {
		if (a[i] == a[i - 1] && a[i] == a[i + 1]) {
			continue;
		}
		if (a[i] == a[i - 1]) {
			cout << i + 2 << endl;
		} else if (a[i] == a[i + 1]) {
			cout << i << endl;
		} else {
			cout << i + 1 << endl;
		}
		break;
	}
}

int32_t main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	clock_t z = clock();

	int t = 1;
	if (LOOP_TEST_CASES) {
		cin >> t;
	}
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

	return 0;
}