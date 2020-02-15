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
  string N; int K;
  cin >> N >> K;
  int ans = 0;
  if(K == 1) {
    ans += N[0]-'0';
    ans += (N.size()-1) * 9;
  }
  else if(K == 2) {

  }
  else if(K == 3) {

  }
  cout << ans << endl;
}

