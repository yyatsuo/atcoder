#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  int W,H,N; cin >> W >> H >> N;
  vector<int> x(N), y(N), a(N);
  rep(i,N) cin >> x[i] >> y[i] >> a[i];
  int x0=0, x1=W, y0=0, y1=H;
  rep(i,N) {
    switch(a[i]) {
      case 1:
        if(x0 <= x[i]) x0 = x[i];
        break;
      case 2:
        if(x1 >= x[i]) x1 = x[i];
        break;
      case 3:
        if(y0 <= y[i]) y0 = y[i];
        break;
      case 4:
        if(y1 >= y[i]) y1 = y[i];
        break;
    }
  }
  if(x1<x0 || y1<y0) cout << 0 << endl;
  else cout << (x1-x0)*(y1-y0) << endl;
}

