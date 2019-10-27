#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

ll dp[11000][11000];

int main() {
  ll N, K; cin >> N >> K;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  vector<ll> ans(N,0);
  rep(i,N-K+1) {
    rep(j, K) {
      ans[i] += A[i+j];
    }
  }
  ll ret = 0;
  for(auto i:ans) ret += i;
  cout << ret << endl;
}

