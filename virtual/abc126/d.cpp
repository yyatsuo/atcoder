#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

struct Node {
  vector<pair<int, int>> child;
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<int> ans[N+1];
  vector<Node> node(N+1);

  rep(i, N-1) {
  }


  repp(i,N) cout << ans[i] << endl;
}

