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
  ll X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;
  vector<int> p(A), q(B), r(C);
  rep(i,A) cin >> p[i];
  rep(i,B) cin >> q[i];
  rep(i,C) cin >> r[i];
  sort(p.rbegin(), p.rend());
  sort(q.rbegin(), q.rend());

  vector<int> V;
  rep(i,X) V.push_back(p[i]);
  rep(i,Y) V.push_back(q[i]);
  rep(i,C) V.push_back(r[i]);
  sort(V.rbegin(), V.rend());
  ll ans = 0;
  rep(i, X+Y) ans += V[i];
  cout << ans << endl;
}

