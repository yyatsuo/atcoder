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
  vector<pair<int,int>> ab(M);// first->endpoint, second->startpoint
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    ab[i] = make_pair(b, a);
  }
  sort(ab.begin(), ab.end());
  int ans = 0, cur = 1;
  for(auto i:ab) {
    if(cur <= i.second) {
      cur = i.first;
      ++ans;
    }
  }
  cout << ans << endl;
}

