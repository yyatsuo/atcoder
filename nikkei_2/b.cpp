#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 998244353
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

ull node[100100];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ull N; cin >> N;
  rep(i,N) {
    ull tmp;
    cin >> tmp;
    if(i==0 && tmp!=0) {
      cout << 0 << endl;
      return 0;
    }
    node[tmp] += 1;
  }
  ull ans = 0;
  ull i;
  if(node[0] == 1) {
    ans = 1;
    for(i=2; i<100100; ++i) {
      if(node[i] == 0) break;
      for(ull j=1; j<=node[i]; ++j) {
        ans *= node[i-1];
        ans %= MOD;
      }
    }
    for(int n=i; n<100100; ++n) {
      if(node[n] != 0) {
        ans = 0;
        break;
      }
    }
  }
  cout << ans << endl;
}

