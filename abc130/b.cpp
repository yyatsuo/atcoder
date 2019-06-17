#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main() {
  ll n, x, ans=1;
  cin >> n >> x;
  vector<int> l(n);
  rep(i, n) cin >> l[i];
  for(ll i=0,d=0; i<n; ++i) {
    d += l[i];
    if(d <= x)ans++;
    else break;
  }
  cout << ans << endl;
  return 0;
}
