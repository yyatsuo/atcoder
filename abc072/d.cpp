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
  int N; cin >> N;
  vector<int> p(N);
  rep(i, N) {
    cin >> p[i];
  }
  int ans = 0;
  rep(i, N-1) {
    if(p[i] == (i+1)) {
      ++ans;
      swap(p[i],p[i+1]);
    }
  }
  if(p[N-1] == N) {
    ++ans;
  }
  cout << ans << endl;
}

