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
  int M, D; cin >> M >> D;
  int ans = 0;
  for(int m=2; m<=M; ++m) {
    for(int d=2; d<=D; ++d) {
      int d10 = d/10;
      int d1 = d%10;
      if(d1 >=2 && d10 >=2 && (d10 * d1) == m) ++ans;
    }
  }
  cout << ans << endl;
}

