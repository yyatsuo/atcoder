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
  vector<pair<int, int>> itv(N);
  rep(i, N) {
    int X, L;
    cin >> X >> L;
    itv[i].first = L + X;
    itv[i].second = max(0,X-L);
  }
  sort(itv.begin(), itv.end());
  int ans = 0, t = 0;
  rep(i, N) {
    if(t <= itv[i].second) {
      ++ans;
      t = itv[i].first;
    }
  }
  cout << ans << endl;
}

