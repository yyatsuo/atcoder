#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int grid[110][110];

int main() {
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A(H*W);
  for(int i=0, j=0; i<N; ++i) {
    int a; cin >> a;
    for(int k=0; k<a; ++k) {
      A[j++] = i+1;
    }
  }
  int n = 0;
  rep(h,H) {
    rep(w, W) {
      if(h%2) grid[h][W-w-1] = A[n++];
      else grid[h][w] = A[n++];
    }
  }
  rep(h,H) {
    rep(w, W) {
      cout << grid[h][w] << " ";
    }
    cout << endl;
  }
}

