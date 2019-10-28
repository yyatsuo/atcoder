#include <bits/stdc++.h>
#define INF ULLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

vector<ull> div(ull n) {
  vector<ull> ret;
  for(ull i=1; i*i <= n; ++i) {
    if(n%i == 0) {
      ret.push_back(i);
      if(i*i != 0) ret.push_back(n/i);
    }
  }
  sort(ret.begin(),ret.end());
  unique(ret.begin(),ret.end());
  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ull N; cin >> N;
  vector<ull> div_arr = div(N);
  ull ans = INF;
  for(ull a:div_arr) {
    ull b = N/a;
    chmin(ans, a+b-2);
  }
  cout << ans << endl;
}

