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
  int H,W,K; cin >> H >> W >> K;
  vector<string> cake(H);
  rep(i,H) cin >> cake[i];
  vector<vector<int>> ans(H, vector<int>(W, 0));
  vector<int> x,y;
  int num = 1;
  rep(h,H) { rep(w, W) { if(cake[h][w] == '#') { ans[h][w] = num; ++num; x.push_back(w); y.push_back(h); } } }
  rep(i, x.size()) {
    int h = y[i];
    int w = x[i]-1;
    while(w >=0 && ans[h][w] == 0) {
      ans[h][w] = ans[y[i]][x[i]];
      --w;
    }
    w = x[i]+1;
    while(w < W && ans[h][w] == 0) {
      ans[h][w] = ans[y[i]][x[i]];
      ++w;
    }
  }
  rep(h,H) {
    rep(w,W) {
      if(ans[h][w] == 0) {
        int tmp = 0, cnt = 1;
        while(h-cnt >= 0 && tmp == 0) { tmp=ans[h-cnt][w]; cnt++;}
        cnt = 0;
        while(h+cnt < H && tmp == 0) { tmp=ans[h+cnt][w]; cnt++;}
        ans[h][w] = tmp;
      }
    }
  }
  rep(h,H) { rep(w, W) { cout << ans[h][w] << " "; } cout << endl; }
}

