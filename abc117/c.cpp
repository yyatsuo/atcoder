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
  int N, M; cin >> N >> M;
  vector<int> X(M);
  rep(i, M) cin >> X[i];
  sort(X.begin(), X.end());
  vector<int> gap;
  rep(i, M-1) {
    gap.push_back(X[i+1]-X[i]);
  }
  sort(gap.begin(), gap.end());
  int ans = 0;
  for(int i=0; gap.size()>=N && i<=gap.size()-N; ++i) {
    ans += gap[i];
  }
  cout << ans << endl;
}

