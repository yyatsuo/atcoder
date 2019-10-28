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
  int xa, ya, xb, yb, n;
  float T, V;
  cin >> xa >> ya >> xb >> yb >> T >> V >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  rep(i, n) {
    float d = sqrt(pow(y[i]-ya,2) + pow(x[i]-xa, 2));
    d += sqrt(pow(y[i]-yb,2) + pow(x[i]-xb, 2));
    if(d <= T*V) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}

