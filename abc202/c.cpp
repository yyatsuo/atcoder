#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
#define YesNo(e) printf("%s\n", e ? "Yes" : "No");

using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ull N; cin >> N;
  vector<ull> A(N+1),B(N+1),C(N+1);
  repp(i,N) cin >> A[i];
  repp(i,N) cin >> B[i];
  repp(i,N) cin >> C[i];

  vector<ull> P(N+1,0);
  vector<ull> Q(N+1,0);

  repp(i,N) {
    P[A[i]]++;
  }

  repp(i,N) {
    Q[B[C[i]]]++;
  }

  ull ans = 0;
  repp(i,N) {
    ans += P[i] * Q[i];
  }

  cout << ans << endl;
}

