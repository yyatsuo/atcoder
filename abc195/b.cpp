#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(int i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int A, B, W;
  cin >> A >> B >> W;
  W *= 1000;
  int mi=INF, ma=-1;
  FOR(choose, 1, W+1) {
    int L = choose * A;
    int R = choose * B;
    if(L <= W && W <= R) {
      chmin(mi, choose);
      chmax(ma, choose);
    }
  }
  if(mi==INF) cout << "UNSATISFIABLE" << endl;
  else cout << mi << " " << ma << endl;
}
