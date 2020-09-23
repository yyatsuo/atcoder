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

int digit(ll N) {
  int ret = 1;
  while(N>=10) {
    N = N/10;
    ++ret;
  }
  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<ull> A(N);
  rep(i,N) cin >> A[i];
  sort(A.begin(), A.end());

  ull ans = 1;
  rep(i,N) {
    if(digit(ans) + digit(A[i] - 1) > 19) {
      cout << -1 << endl;
      return 0;
    }
    ans *= A[i];
    if(ans > 1000000000000000000) {
      cout << -1 << endl;
      return 0;
    }
    if(ans == 0) {
      cout << 0 << endl;
      return 0;
    }
  }
   cout << ans << endl;
}
