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
  vector<int> T(N), A(N);
  rep(i, N) cin >> T[i] >> A[i];
  ll T_tot=T[0], A_tot=A[0];
  for(int i=1; i<N; ++i) {
    int n = max((T_tot+T[i]-1)/T[i], (A_tot+A[i]-1)/A[i]);
    T_tot = T[i]*n;
    A_tot = A[i]*n;
  }
  cout << T_tot + A_tot << endl;
}

