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
  int N; cin >> N;
  vector<int> x(N), y(N), h(N);
  int n;
  rep(i, N) {
    cin >> x[i] >> y[i] >> h[i];
    if(h[i]) n = i;
  }
  int CX, CY, H;
  int ans[3];
  for(CX=0; CX<=100; ++CX) {
    for(CY=0; CY<=100; ++CY) {
      H = h[n] + (abs(CX-x[n]) + abs(CY-y[n]));
      bool flg = true;
      rep(i, N) {
        if(h[i] > 0 && H-h[i] != abs(CX-x[i])+abs(CY-y[i]))
          flg = false;
        if(h[i]==0 && H > abs(CX-x[i])+abs(CY-y[i]))
          flg = false;
      }
      if(flg) {
        ans[0]=CX;
        ans[1]=CY;
        ans[2]=H;
      }
    }
  }
  printf("%d %d %d\n", ans[0], ans[1], ans[2]);
}

