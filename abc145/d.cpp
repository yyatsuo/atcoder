#include <bits/stdc++.h>
#define MAX 1000100
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

vector<ll> fact, factinv, inv;

void factinit() {
  fact.resize(MAX); factinv.resize(MAX); inv.resize(MAX);
  fact[0] = fact[1] = 1;
  factinv[0] = factinv[1] = 1;
  inv[1] = 1;
  for(int i=2; i<MAX; ++i) {
    fact[i] = fact[i-1] * i % MOD;
    inv[i] = MOD-inv[MOD%i] * (MOD/i) % MOD;
    factinv[i] = factinv[i-1] * inv[i] %MOD;
  }
}

ll combi(ll a, ll b) {
  if(a < b || a < 0 || b < 0) return 0;
  return fact[a] * (factinv[b] * factinv[a-b] % MOD) %MOD;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int x, y, n; cin >> x >> y;
  ll ans = 0;
  if((x+y)%3 == 0) {
    //if(y == 2*x) ans = 1;
    //else if(x == 2*y) ans =1;
    //else {
      factinit();
      int m = (x-y)/3;
      int n = (y-x)/3;
      ans = combi(n+m, n);
    //}
  }
  cout <<  ans << endl;
}

