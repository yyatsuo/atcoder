#include <bits/stdc++.h>
#define INF INT_MAX
#define ll long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
#define mod 1000000007
#define MAX 910000
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

ll modpow(ll x, ll y) {
  ll ret = 1;
  rep(i, y) {
    ret = ret*x%MOD;
  }
  return ret;
}

int main() {
  ll N; cin >> N;
  ll ans = modpow(10, N) - modpow(9,N) - modpow(9,N) + modpow(8,N);
  ans %= MOD;
  ans = (ans+MOD)%MOD;
  cout << ans << endl;
}
