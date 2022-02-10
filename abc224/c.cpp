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
#define NoYes(e) printf("%s\n", e ? "No" : "Yes");

using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<ll> x(N), y(N);
  rep(i,N) { cin >> x[i] >> y[i]; }
  int ans = 0;
  for(int i=0; i<N; ++i) {
    for(int j=i+1; j<N; ++j) {
      for(int k=j+1; k<N; ++k) {
        if( (y[k]-y[i])*(x[j]-x[i]) != (y[j]-y[i])*(x[k]-x[i]) ) ++ans;
      }
    }
  }
  cout << ans << endl;
}

