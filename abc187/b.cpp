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
  vector<float> x(N), y(N);
  rep(i, N) cin >> x[i] >> y[i];

  int ans = 0;
  for(int i=0; i<N; ++i) {
    for(int j=i+1; j<N; ++j) {
      float a = (y[j]-y[i])/(x[j]-x[i]);
      if(-1 <= a && a <= 1) ++ans;
    }
  }
  cout << ans << endl;
}

