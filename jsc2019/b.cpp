#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  ll N, K; cin >> N >> K;
  vector<ll> A(N); rep(i, N) cin >> A[i];
  ll cnt = 0;
  rep(i, N){for(ll j=i+1; j<N; ++j){ if(A[i] > A[j]) {++cnt;}}}
  ll cnt2 = 0;
  if(K >= 2){rep(i,N){rep(j,N){if(A[i]>A[j]){++cnt2;}}}}
  cnt = (cnt*K)%MOD;
  cnt2 = ((K*(K-1)/2)*cnt2)%MOD;
  cout << (cnt+cnt2)%MOD << endl;
}


