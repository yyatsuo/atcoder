#include <bits/stdc++.h>
#define INF LLONG_MAX
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
  ll N; cin >> N;
  vector<ll> a(N), sum(N);
  rep(i, N) {
    cin >> a[i];
    if(i) sum[i] = sum[i-1]+a[i];
    else sum[i] = a[i];
  }
  ll ans = INF;
  rep(i, N-1) {
    chmin(ans, abs((sum[N-1]-sum[i]) - sum[i]));
  }
  cout << ans << endl;
}

