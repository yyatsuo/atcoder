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
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> C(N);
  vector<vector<int>> A(N, vector<int>(M));
  rep(i, N) {
    cin >> C[i];
    rep(j,M) {
      cin >> A[i][j];
    }
  }

  vector<int> V(N);
  rep(i, N) V[i] = i;

  int ans = -1;

  for(int bit=0; bit <(1<<N); ++bit) {
    vector<int> S;
    for(int i=0; i<N; ++i) {
      if(bit & (1<<i)) {
        S.push_back(i);
      }
    }
    vector<int> tmp(M, 0);
    int c_tmp = 0;
    for(int i:S) {
      c_tmp += C[i];
      rep(m,M) { tmp[m] += A[i][m]; }
    }
    bool b = true;
    for(auto t:tmp) {
      if(t < X) b = false;
    }
    if(b) {
      if(ans == -1) ans = c_tmp;
      else ans = min(c_tmp, ans);
    }
  }
  cout << ans << endl;
}

