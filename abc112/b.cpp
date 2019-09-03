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
  int N, T; cin >> N >> T;
  int ans = 9999;
  rep(i, N) {
    int c, t; cin >> c >> t;
    if( t <=T && c < ans) {
      ans = c;
    }
  }
  if(ans == 9999) cout << "TLE" << endl;
  else cout << ans << endl;
}

