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
  cin.tie(0);
  ios::sync_with_stdio(false);
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  int m = 100;

  rep(h,H) {
    rep(w,W) {
      cin >> A[h][w];
      m = min(m, A[h][w]);
    }
  }

  int ans = 0;
  rep(h,H) {
    rep(w,W) {
      ans += max(0, A[h][w]-m);
    }
  }

  cout << ans << endl;
}

