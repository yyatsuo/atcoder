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

int calc(int x) {
  if(x == 3) return 100000;
  if(x == 2) return 200000;
  if(x == 1) return 300000;
  return 0;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int X, Y; cin >> X >> Y;
  int ans = calc(X);
  ans += calc(Y);
  if(X==1 && Y==1) ans+=400000;
  cout << ans << endl;
}

