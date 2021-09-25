#include <bits/stdc++.h>
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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N; cin >> N;
  vector<ll> S(N+1);
  vector<ll> T(N+1);
  vector<ll> ans(N+1);
  repp(i,N) { cin >> S[i]; }
  repp(i,N) { cin >> T[i]; }
  repp(i,N) {
    if(i == 1) {
      ans[1] = min(T[1], T[N]+S[N]);
    }
    ans[i] = min(T[i], T[i-1]+S[i-1]);
  }
  repp(i,N) {
    cout << ans[i] << endl;
  }
}

