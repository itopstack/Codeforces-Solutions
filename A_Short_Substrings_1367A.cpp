// Problem: A. Short Substrings
// Contest: Codeforces - Codeforces Round #650 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1367/A
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
  string b;
  cin >> b;
  string a = "";

  for (int i = 0; i < b.size(); i++) {
    if (i < 2 || i % 2 == 1) {
      a += b[i];
    }
  }

  cout << a << endl;
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
