// Problem: B. Vanya and Lanterns
// Contest: Codeforces - Codeforces Round #280 (Div. 2)
// URL: https://codeforces.com/problemset/problem/492/B
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
  int n, l;
  cin >> n >> l;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);

  int res = 2 * max(a[0], l - a[n - 1]);
  for (int i = 0; i < n - 1; i++) {
    res = max(res, a[i + 1] - a[i]);
  }
  printf("%.10f\n", res / 2.0);
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
