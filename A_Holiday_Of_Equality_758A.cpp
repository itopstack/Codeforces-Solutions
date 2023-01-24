// Problem: A. Holiday Of Equality
// Contest: Codeforces - Codeforces Round #392 (Div. 2)
// URL: https://codeforces.com/problemset/problem/758/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Who: kittisakp
// Email: kittisakp.work@gmail.com
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>

#define int long long int
#define double long double
#define print(a)                     \
  for (auto x : a) cout << x << " "; \
  cout << endl

using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  int ans = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);

  for (int i = 0; i < n - 1; i++) {
    ans += a[n - 1] - a[i];
  }

  cout << ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  clock_t z = clock();

  int t = 1;
  // cin >> t;
  while (t--) solve();

  cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

  return 0;
}
