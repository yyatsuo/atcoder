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
  rep(i, N) cin >> A[i];
  ll prev = 10001, cnt = 0, ans = 0;
  for(int i=0; i<N; ++i) {
    if(prev != A[i]) {
      ans += cnt/2;
      prev = A[i];
      cnt = 1;
    } else {
      ++cnt;
    }
  }
  ans += cnt/2;
  cout << ans << endl;
}

