// Problem: B. Taxi
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/B
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

using namespace std;

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
  cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
  const char* comma = strchr(names + 1, ',');
  cout.write(names, comma - names) << " : " << arg1 << " | ";
  __f(comma + 1, args...);
}

void solve() {
  int n, num;
  cin >> n;
  int count[5] = {0};
  while (n--) {
    cin >> num;
    count[num]++;
  }

  int total = count[4] + count[3] + count[2] / 2;
  count[1] -= count[3];
  if (count[2] % 2 == 1) {
    total++;
    count[1] -= 2;
  }
  if (count[1] > 0) {
    total += (count[1] + 3) / 4;
  }

  cout << total;
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