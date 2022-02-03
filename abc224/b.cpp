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

int A[55][55];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int H, W; cin >> H >> W;
  rep(i,H) {
    rep(j,W) {
      cin >> A[i][j];
    }
  }

  for(int i1=0; i1<H-1; i1++) {
    for(int i2=i1+1; i2<H; i2++) {
      for(int j1=0; j1<W-1; j1++) {
        for(int j2=j1+1; j2<W; j2++) {
          if(A[i1][j1]+A[i2][j2] > A[i2][j1] + A[i1][j2]) {
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "Yes" << endl;
}

