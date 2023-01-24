// Problem: A. Case of the Zeros and Ones
// Contest: Codeforces - Codeforces Round #310 (Div. 2)
// URL: https://codeforces.com/problemset/problem/556/A
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
  char c;
  stack<char> s;

  while (n-- > 0) {
    cin >> c;
    if (s.empty() || s.top() == c) {
      s.push(c);
    } else {
      s.pop();
    }
  }

  cout << s.size();
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
