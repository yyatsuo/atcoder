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
  double A, B, X;
  cin >> X;
  for(B=-X; ;++B) {
    for(A=0; ;++A) {
      if(A*A*A*A*A - B*B*B*B*B == X) {
        cout << (ll)A << " " << (ll)B << endl;
        return 0;
      }
      if(A*A*A*A*A - B*B*B*B*B > X) break;
      continue;
    }
  }
}

