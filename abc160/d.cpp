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
  vector<int> ans(2200, 0);

  int N, X, Y;
  cin >> N >> X >> Y;

  for(int i=1; i<N; ++i) {
    for(int j=i+1; j<=N; ++j) {
      int dist = min(j-i, abs(X-i)+1+abs(Y-j));
      ans[dist]++;
    }
  }

  for(int i=1; i<N; ++i)
    cout << ans[i] << endl;
}

