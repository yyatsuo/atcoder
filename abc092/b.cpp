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
  int N, D, X;
  cin >> N >> D >> X;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  ll ans = 0;
  rep(i, N) {
    for(int day=1; day <= D; day = day + A[i]) ++ans;
  }
  cout << ans+X << endl;
}

