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
  map<ll, bool> mp;
  rep(i, N) {
    ll A; cin >> A;
    auto it = mp.find(A);
    if(it == mp.end()) {
      mp.emplace(A, true);
    } else {
      it->second ? it->second=false : it->second=true;
    }
  }
  ll ans = 0;
  for(auto a:mp) {
    if(a.second) ++ans;
  }
  cout << ans << endl;
}

