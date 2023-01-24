// Problem: A. Business trip
// Contest: Codeforces - Codeforces Round #106 (Div. 2)
// URL: https://codeforces.com/problemset/problem/149/A
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
  int k;
  cin >> k;
  int a[12];

  for (int i = 0; i < 12; i++) {
    cin >> a[i];
  }
  sort(a, a + 12);

  int ans = 0;
  int sum = 0;
  for (int i = 11; i >= 0; i--) {
    if (sum >= k) {
      break;
    }
    sum += a[i];
    ans++;
  }

  if (sum < k) {
    cout << "-1";
  } else {
    cout << ans;
  }
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
