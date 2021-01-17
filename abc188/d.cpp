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
  ll N, C;
  cin >> N >> C;
  vector<pair<ll, ll>> event(N*2);
  rep(i,N) {
    int a, b, c;
    cin >> a >> b >> c;
    event[2*i] = make_pair(a, c);
    event[2*i+1] = make_pair(b+1, -1*c);
  }
  sort(event.begin(), event.end());

  ll ans = 0, day = event[0].first, fee = 0;
  rep(i, N*2-1) {
    fee += event[i].second;
    if(event[i+1].first != day) {
      ans += min(C, fee) * (event[i+1].first - day);
      day = event[i+1].first;
    }
  }
  cout << ans << endl;
}
