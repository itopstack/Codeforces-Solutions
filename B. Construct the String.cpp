// Problem: B. Construct the String
// Contest: Codeforces - Codeforces Round #634 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1335/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  int n, a, b;
  cin >> n >> a >> b;
  for (int i = 0; i < n; ++i) {
    cout << char('a' + i % b);
  }
  cout << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  clock_t z = clock();

  int t = 1;
  cin >> t;
  while (t--) solve();

  cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

  return 0;
}
