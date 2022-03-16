#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef long double         ld;
typedef unsigned long long  ull;
typedef pair <int, int>     pii;
typedef pair <ll, ll>       pll;
typedef vector <int>        vi;
typedef vector <ll>         vll;

const int N       = (int) 2e5 + 5;
const int mxN     = (int) 1e6 + 6;
const int MOD     = (int) 1e9 + 7;
const int INF     = (int) 1e9 + 9;
const double EPS  = (double) 1e-9;

#define debug(x)  cerr << #x << " = " << x << '\n';
#define all(x)    x.begin(), x.end()
#define szof(x)   (int) x.size()
#define ff        first
#define ss        second
#define pb        push_back
#define mp        make_pair
#define PI        acos(-1.0)
#define nl        '\n'
#define Fast_IO   ios_base::sync_with_stdio(false); cin.tie(nullptr);

/*........................ let's try one more time ........................*/

int main() {
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif
  Fast_IO
  int test = 1, tc = 0;
  while (test--) {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; ++i) {
      int x, y;
      cin >> x >> y;
      v.pb({x, y});
    }
    string s;
    cin >> s;
    map<int, bool> m;
    bool isCollision = 0;
    vector<pair<int, pair<int, char>>> dt;
    for (int i = 0; i < n; ++i) {
      dt.pb({v[i].ff, {v[i].ss, s[i]}});
    }
    sort(all(dt));

    for (int i = 0; i < n; ++i) {
      if (dt[i].ss.ss == 'R') {
        m[dt[i].ss.ff] = 1;
      } else {
        if (m[dt[i].ss.ff]) isCollision = 1;
      }
    }
    if (isCollision) cout << "Yes" << nl;
    else cout << "No" << nl;
  }
  return 0;
}
