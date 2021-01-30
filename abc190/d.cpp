#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N; cin >> N;
  N = 2*N;
  vector<ll> div;
  for(ll i=1; i*i<=N; ++i) {
    if (N%i == 0) {
      div.push_back(i);
      if(N/i != i) { div.push_back(N/i); }
    }
  }
  ll ans = 0;
  for(auto n:div) {
    cout << "n: " << n <<endl;
    for(ll S=-1*n; S < n; ++S) {
      ll E = S+n-1;
      cout << "S:" << S << ", E:" << E << endl;
      if((S+E)*n == N) {
        cout << "Found!" << endl;
        ++ans;
      }
    }
  }
  cout << ans << endl;
}

