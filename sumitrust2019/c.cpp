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
  int X; cin >> X;
  int n = X/100, tmp = X%100, cnt = 0;
  for(int i=5; i>0; --i) {
    cnt += tmp/i; tmp=tmp%i;
  }
  if(cnt <= n) cout << 1 << endl;
  else cout << 0 << endl;
}

