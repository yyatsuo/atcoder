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
  map<ll, ll> mp;
  rep(i, N) {
    ll tmp; cin >> tmp;
    if(mp.find(tmp) != mp.end()) mp[tmp]++;
    else mp[tmp] = 1;
  }
  ll ans = 0;
  for(auto i:mp) {
    if(i.first < i.second) {
      ans += i.second-i.first;
    } else if(i.first > i.second) {
      ans += i.second;
    }
  }
  cout << ans << endl;
}

