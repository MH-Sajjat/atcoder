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
    string s[2], t;
    cin >> t;
    s[0] = s[1] = "";
    for (int i = 0; i < n; ++i) s[0] += t[i];
    for (int i = n; i < 2 * n; ++i) s[1] += t[i];
    int q;
    cin >> q;
    while (q--) {
      int t, a, b;
      cin >> t >> a >> b;
      a--, b--;
      if (t == 2) swap(s[0], s[1]);
      else {
        if (b < n) swap(s[0][a], s[0][b]);
        else if (a >= n) swap(s[1][a % n], s[1][b % n]);
        else swap(s[0][a], s[1][b % n]);
      }
    }
    cout << s[0] << s[1] << nl;
  }
  return 0;
}
