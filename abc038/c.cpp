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
  vector<ll> a(N+1);
  rep(i,N) cin >> a[i];
  a[N] = 0;
  ll ans = 0, l=0, r=0;
  while(l < N) {
    while(a[r+1] > a[r]) ++r;
    ans += r-l+1;
    ++l;
    if(l==r+1) ++r;
  }
  cout << ans << endl;
}

