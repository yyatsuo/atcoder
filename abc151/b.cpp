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
  int N, K, M;
  int sum=0;
  cin >> N >> K >> M;
  vector<int> A(N);
  rep(i,N-1) {
    float tmp; cin >> tmp;
    sum+=tmp;
  }
  int ans = M*N-sum;
  if(ans <= 0) cout << 0;
  else if(ans > K) cout << -1;
  else cout << ans;
}

