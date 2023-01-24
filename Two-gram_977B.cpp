// Problem: B. Two-gram
// Contest: Codeforces - Codeforces Round #479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/B
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
  char a[n];
  unordered_map<string, int> m;
  int maxVal = -1e18;
  string ans = "";

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n - 1; i++) {
    string key = "";
    key += a[i];
    key += a[i + 1];

    m[key] += 1;
    if (m[key] > maxVal) {
      maxVal = m[key];
      ans = key;
    }
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
