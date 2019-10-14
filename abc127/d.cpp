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
  ll N, M; cin >> N >> M;
  vector<ll> A(N);
  vector<pair<ll, ll>> BC;
  BC.resize(M);
  rep(i,N) cin >> A[i];
  rep(i,M) {
    cin >> BC[i].second >> BC[i].first;
  }
  sort(A.begin(), A.end());
  sort(BC.begin(), BC.end());
  ll j = 0;
  for(ll i=BC.size()-1; i>=0;) {
    if(BC[i].first > A[j] && BC[i].second > 0) {
      A[j] = BC[i].first;
      BC[i].second--;
      ++j;
    } else {
      --i;
    }
  }
  ll ans = 0;
  rep(i, N) ans += A[i];
  cout << ans << endl;
}

