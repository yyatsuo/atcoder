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
  vector<double> X(N);
  rep(i,N) cin >> X[i];
  double m = 0, u = 0, c = 0;
  rep(i,N) {
    m+=abs(X[i]);
    u+=(X[i] * X[i]);
    c = max(c, abs(X[i]));
  }
  cout << fixed << setprecision(20) << m << endl;
  cout << sqrt(u) << endl;
  cout << c << endl;
}

