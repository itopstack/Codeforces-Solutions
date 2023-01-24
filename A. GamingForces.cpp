// Problem: A. GamingForces
// Contest: Codeforces - Educational Codeforces Round 142 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1792/problem/0
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
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);

  int count = 0;
  int j = 0;
  while (j < n) {
    count++;
    if (a[j] == 1 && a[j + 1] == 1) {
      j++;
    }

    j++;
  }

  cout << count << endl;
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
