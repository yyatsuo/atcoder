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
  vector<int> A(N);
  rep(i,N) cin >> A[i];

  ll ans = 1;
  int base = 0;
  int cnt = 0;
  int rem = 3; // 選ぶ余地
  rep(i,N) {
    if(A[i]-base == 0) {
      if(cnt == 0) {
        ans *= 3;
        --rem;
        ++cnt;
      } else if(cnt == 1) {
        ans *= 2;
        --rem;
        ++cnt;
      } else if(cnt == 2) {
        rem = 3;
        cnt = 0;
        ++base;
      }
    }
    else if(rem != 0) {
      ans *= rem;
    }
    ans = ans%MOD;
  }
  cout << ans << endl;
}

