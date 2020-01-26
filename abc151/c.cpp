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
  int N, M; cin >> N >> M;
  vector<bool> ans(N+10, false);
  vector<int>  wa(N+10, 0);
  int cor = 0, wrg = 0;
  rep(i, M) {
    int p; string s;
    cin >> p >> s;
    if(ans[p] == false) {
      if(s == "WA") { wa[p]++; }
      else { ++cor; ans[p]=true; }
    }
  }
  rep(i, N+5) {
    if(ans[i]) wrg+=wa[i];
  }
  cout << cor << " " << wrg;
}

