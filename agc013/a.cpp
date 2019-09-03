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
  ll N; cin >> N;
  vector<ll> A(N);
  rep(i,N) cin >> A[i];
  int dir = 0;
  ll ans = 1;
  rep(i,N-1) {
    if(dir == 1) {
      if(A[i] > A[i+1]) {
        ++ans;
        dir = 0;
      }
    } else if (dir == -1) {
      if(A[i] < A[i+1]) {
        ++ans;
        dir = 0;
      }
    } else if (dir == 0) {
      if(A[i] > A[i+1]) dir = -1;
      if(A[i] < A[i+1]) dir = 1;
    }
  }
  cout << ans << endl;
}

