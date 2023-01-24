// Problem: A. Theatre Square
// Contest: Codeforces - Codeforces Beta Round #1
// URL: https://codeforces.com/problemset/problem/1/A
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
  int n, m, a;
  cin >> n >> m >> a;

  int countWidth = n / a;
  if (n % a != 0) {
    countWidth++;
  }
  int countHeight = m / a;
  if (m % a != 0) {
    countHeight++;
  }

  cout << countWidth * countHeight;
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
