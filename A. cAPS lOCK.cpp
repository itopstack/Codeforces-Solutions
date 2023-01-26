// Problem: A. cAPS lOCK
// Contest: Codeforces - Codeforces Beta Round #95 (Div. 2)
// URL: https://codeforces.com/problemset/problem/131/A
// Memory Limit: 256 MB
// Time Limit: 500 ms
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

void convert(string& s, bool allLower) {
  for (int i = 0; i < s.size(); i++) {
    if (!allLower && i == 0) {
      s[i] = toupper(s[i]);
    } else {
      s[i] = tolower(s[i]);
    }
  }
}

void solve() {
  string s;
  cin >> s;
  int countUpper = 0;
  bool onlyFirstIsLower = false;

  for (int i = 0; i < s.size(); i++) {
    if (isupper(s[i])) {
      countUpper++;
    } else {
      if (i == 0) {
        onlyFirstIsLower = true;
      } else {
        onlyFirstIsLower = false;
      }
    }
  }

  if (countUpper == s.size()) {
    convert(s, true);
  } else if (onlyFirstIsLower) {
    convert(s, false);
  }

  cout << s;
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
