#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N, H; cin >> N >> H;
  vector<ll> a(N), b(N);
  vector<ll> nageru;
  ll a_max = 0, a_max_idx = 0;
  ll tmp;
  rep(i,N) {
    cin >> a[i] >> b[i];
    if(chmax(a_max, a[i])) a_max_idx = i;
  }
  ll ans = 0;

  // 通常の攻撃に使わない刀で、投げる攻撃力がそれより高いのは高い順に投げる
  rep(i, N) { if(b[i] >= a_max) nageru.push_back(b[i]); }
  sort(nageru.begin(), nageru.end(), greater<ll>());
  for(auto i:nageru) {
    H -= i;
    ++ans;
    if(H <= 0) goto done;
  }

  // 通常の攻撃力最高の刀で攻撃する
  tmp = H/a_max;
  if(a_max * tmp < H) ++ans;
  ans += H/a_max;

done:
  cout << ans << endl;
}

