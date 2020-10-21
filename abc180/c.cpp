#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  ll N; cin >> N;
  set<ll> ans;
  for(ll i=1; i*i <= N; ++i) {
    if(N%i == 0) {
      ans.insert(i);
      ans.insert(N/i);
    }
  }
  for(auto i:ans) cout << i << endl;
}

