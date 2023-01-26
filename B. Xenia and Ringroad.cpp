// Problem: B. Xenia and Ringroad
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/B
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
  int n, m, i;
  cin >> n >> m;
  int loc = 1;
  int ans = 0;

  while (m--) {
    cin >> i;

    if (i >= loc) {
      ans += i - loc;
    } else {
      ans += n - (loc - i);
    }
    loc = i;
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
