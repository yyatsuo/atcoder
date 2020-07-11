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
  int H, W, K;
  cin >> H >> W >> K;
  vector<vector<char>> C(H, vector<char>(W, '@'));
  rep(h,H) { rep(w,W) { cin >> C[h][w]; } }
  int ans = 0;
  for(int h=0; h < (1<<H); ++h) {
    for(int w=0; w<(1<<W); ++w) {
      vector<int> hvec;
      vector<int> wvec;
      rep(i, H) {if(h & (1<<i)) { hvec.push_back(i);} }
      rep(i, W) {if(w & (1<<i)) { wvec.push_back(i);} }
      int cnt = 0;
      rep(i, H) {
        rep(j, W) {
          for(auto n:hvec) {
            if(n == i) {
              for(auto m:wvec) {
                if(m == j) {
                  if(C[i][j] == '#') ++cnt;
                }
              }
            }
          }
        }
      }
      if(cnt == K) ++ans;
    }
  }
  cout << ans << endl;
}

