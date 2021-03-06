#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<int> ans(N,0);
  rep(x,sqrt(N)) {
    rep(y,sqrt(N)) {
      rep(z,sqrt(N)) {
        int tmp = x*x + y*y + z*z + x*y + y*z+ z*x;
        if(tmp <= N) {
          ans[tmp-1]++;
        }
      }
    }
  }
  for(int i:ans) cout << i << endl;
}

