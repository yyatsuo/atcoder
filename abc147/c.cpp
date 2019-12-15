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
  vector<int> A(N);
  vector<vector<int>> data(N, vector<int>(N, -1));
  rep(i, N) {
    data[i][i] = 1;
    cin >> A[i];
    rep(j, A[i]) {
      int x, y;
      cin >> x >> y;
      data[i][x-1] = y;
    }
  }
  int ans = 0;
  for(int bit=0; bit < (1<<N); ++bit) {
    vector<int> S;
    for(int i=0; i<N; ++i) {
      if(bit & (1<<i)) {
        S.push_back(i);
      }
    }
    if(S.size() == 0) continue;
    vector<int> ref(N);
    rep(i,N) {
      ref[i] = data[S.at(0)][i];
    }
    int cnt = 0;
    for(int i:S) {
      rep(j, N) {
        if(data[i][j] != ref[j]) {
          goto next;
          break;
        }
      }
      ++cnt;
      next:
      continue;
    }
    if(cnt == S.size()) chmax(ans,cnt);
  }
  cout << ans << endl;
}

