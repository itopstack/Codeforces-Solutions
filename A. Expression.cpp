// Problem: A. Expression
// Contest: Codeforces - Codeforces Round #274 (Div. 2)
// URL: https://codeforces.com/problemset/problem/479/A
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
  int a, b, c;
  cin >> a >> b >> c;

  int num1 = a + b + c;
  int num2 = (a + b) * c;
  int num3 = a * (b + c);
  int num4 = a * b * c;

  int arr[] = {num1, num2, num3, num4};
  sort(arr, arr + 4);

  cout << arr[3];
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