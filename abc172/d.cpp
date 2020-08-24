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

vector<pair<ll,ll>> table;

ll f(ll a) {
  ll ans = 1;
  ll i = 2;
  for(auto p:table) {
    if(a%p.first == 0) {
      ans = p.second;
      i = p.first;
    }
  }
  for(; i<=sqrt(a); ++i) {
    ll cnt = 0;
    while(a%i == 0) {
      ++cnt;
      a /= i;
    }
    ans *= (cnt+1);
    if(a == 1) break;
  }
  if( a!= 1) ans *=2;
  table.push_back(make_pair(a, ans));
  return ans;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N; cin >> N;
  ll ans = 0;
  for(ll i=1; i<=N; ++i) {
    ans += i * f(i);
  }
  cout << ans << endl;
}

