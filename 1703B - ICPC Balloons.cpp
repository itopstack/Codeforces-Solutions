#include <bits/stdc++.h>

#define int long long int
#define double long double
#define print(a) for (auto x: a) cout << x << " "; cout << endl

using namespace std;

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const bool LOOP_TEST_CASES = true;

void solve() {
	int n;
	char a;
	cin >> n;
	string s = "";
	while (n--) {
		cin >> a;
		s += a;
	}

	unordered_set<char> seen;
	int cnt = 0;
	for (char c: s) {
		if (seen.count(c)) {
			cnt++;
		} else {
			cnt += 2;
		}
		seen.insert(c);
	}

	cout << cnt << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t = 1;
	if (LOOP_TEST_CASES) {
		cin >> t;
	}
	while (t--) solve();

	return 0;
}
