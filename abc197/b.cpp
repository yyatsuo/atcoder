#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll H, W, X, Y;
  cin >> H >> W >> X >> Y;

  char S[110][110];
  rep(i,110) { rep(j,110) {
    S[i][j] = '=';
  }}

  repp(i,H) { repp(j,W) {
      cin >> S[i][j];
  }}

  int ans = 1;

  // check E
  int x = X; int y = Y;
  while( S[x+1][y] == '.' ) { ++x; ++ans; }
  // check W
  x = X; y = Y;
  while( S[x-1][y] == '.' ) { --x; ++ans; }
  // check S
  x = X; y = Y;
  while( S[x][y+1] == '.') { ++y; ++ans; }
  // check N
  x = X; y = Y;
  while( S[x][y-1] == '.') { --y; ++ans; }

  cout << ans << endl;;
}

