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
  vector<int> A(9);
  vector<bool> B(9, false);
  rep(i, 9) cin >> A[i];
  int N; cin >> N;
  rep(i, N) {
    int b; cin >> b;
    rep(j, 9) {
      if(A[j] == b) B[j] = true;
    }
  }
  if(
    (B[0] && B[1] && B[2]) ||
    (B[3] && B[4] && B[5]) ||
    (B[6] && B[7] && B[8]) ||
    (B[0] && B[4] && B[8]) ||
    (B[2] && B[4] && B[6]) ||
    (B[0] && B[3] && B[6]) ||
    (B[1] && B[4] && B[7]) ||
    (B[2] && B[5] && B[8]) )
  { cout << "Yes" << endl; }
  else { cout << "No" << endl; }
}
