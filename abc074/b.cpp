#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  int N, K; cin >> N >> K;
  vector<int> x(N); rep(i, N) cin >> x[i];
  int ans = 0;
  rep(i,N) {
    ans += min(abs(x[i]-K), x[i])*2;
  }
  cout << ans << endl;
}

