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
template<class T> inline T gcd(T a, T b) { return a%b ? gcd(b, a%b) : b; }
template<class T> inline T lcm(T a, T b) { return a/gcd(a,b) * b; }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  ull ans = 1;
  rep(i, N) {
    ull t; cin >> t;
    ans = lcm(ans, t);
  }
  cout << ans << endl;
}

