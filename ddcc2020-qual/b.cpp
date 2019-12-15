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

vector<ll> A;
ll N;

ll cost(ll c) {
  ll ret = LLONG_MAX;
  rep(i, N) {
    chmin(ret, abs(A[i]-c));
  }
  return ret*2;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> N; A.resize(N);
  ll tot = 0;
  rep(i,N) {
    ll tmp; cin >> tmp;
    tot += tmp;
    if(i==0) A[i] = tmp;
    else A[i] = A[i-1]+tmp;
  }
  ll ans;
  if(tot%2) {
    ans = cost((tot+1)/2);
    chmin(ans, cost((tot-1)/2));
    ans += 1;
  } else {
    ans = cost(tot/2);
  }
  cout << ans << endl;
}

