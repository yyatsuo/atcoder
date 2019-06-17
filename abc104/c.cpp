#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main() {
  ll d, g;
  cin >> d >> g;
  g /= 100;
  vector<int> p(d), c(d);
  rep (i, d) {
    cin >> p[i] >> c[i];
    c[i] /= 100;
  }

  ll ans = INT_MAX;
  rep (i, (1<<d)) {
    ll cnt = 0, sum = 0;
    rep (j, d) {
      if (i & (1<<j)) {
        cnt += p[j];
        sum += p[j]*(j+1) + c[j];
      }
    }
    for (ll j = d-1; j >= 0; j--) {
      if (~i>>j & 1) {
        for (ll k = 0; k < p[j] && sum < g; k++) {
          sum += j+1;
          cnt++;
        }
      }
    }
    if (sum >= g) {
      ans = min(cnt, ans);
    }
  }
  cout << ans << endl;
}

