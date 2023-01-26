// Problem: A. Dragons
// Contest: Codeforces - Codeforces Round #142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Who: zppz
// Profile: https://codeforces.com/profile/zppz
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
  int s, n;
  cin >> s >> n;
  pair<int, int> a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  sort(a, a + n);

  for (auto p : a) {
    if (s <= p.first) {
      cout << "NO";
      return;
    } else {
      s += p.second;
    }
  }

  cout << "YES";
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
