#include <bits/stdc++.h>
#define INF INT_MAX
#define ULL_MAX ULLONG_MAX
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
  string N; cin >> N;

  int ans = INF;
  bool found = false;
  for(int bit=0; bit < (1 << N.length()); ++bit) {
    int tmp = 0;
    string numstr;
    for(int i=0; i<N.length(); ++i) {
      int mask = 1 << i;
      if(bit & mask) {
        ++tmp;
      } else {
        numstr.push_back(N[i]);
      }
    }
    if(numstr.size() != 0) {
      ull num = stoull(numstr);
      if(num%3 == 0) {
        chmin(ans, tmp);
        found = true;
      }
    }
  }
  if(found) cout << ans << endl;
  else cout << -1 << endl;
}

