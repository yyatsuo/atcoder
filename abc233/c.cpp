#include <bits/stdc++.h>
#include <atcoder/all>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
#define YesNo(e) printf("%s\n", e ? "Yes" : "No");

using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

ll ans = 0;
ll N, X;
vector<vector<ll>> L;

void dfs(ll pos, ll prod) {
  if(pos >= N) {
    if(prod == X) ++ans;
    return;
  }
  for(ll n:L[pos])
  {
    if(prod>X/n) continue;
    dfs(pos+1, prod*n);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> N >> X;
  L.resize(N);
  rep(i,N) {
    ll tmp; cin >> tmp;
    L[i].resize(tmp);
    rep(j,tmp) cin >> L[i][j];
  }
  dfs(0,1);
  cout << ans << endl;
}

