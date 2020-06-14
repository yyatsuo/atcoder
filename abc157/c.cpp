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
  int M; cin >> M;
  vector<int> a(N, -1);
  rep(i, M) {
    int s, c;
    cin >> s >> c;
    if(a[s-1] != -1 && a[s-1] != c) {
      cout << -1 << endl;
      return 0;
    }
    a[s-1] = c;
  }
  if(a[0] == 0 && N != 1) {
    cout << -1 << endl;
    return 0;
  }
  if(a[0] == -1) {
    if(N==1) a[0] = 0;
    else a[0] = 1;
  }
  for(auto i:a) {
    if(i == -1) cout << 0;
    else cout << i;
  }
  cout << endl;
}

