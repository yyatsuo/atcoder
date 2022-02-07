#include <bits/stdc++.h>
#include <atcoder/all>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
#define YesNo(e) printf("%s\n", e ? "Yes" : "No");
#define NoYes(e) printf("%s\n", e ? "No" : "Yes");

using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int ans = 0;

  vector<int> B;
  for(int i=0, cur=0; i<N; ++i) {
    int tmp = (cur+A[i])%360;
    cur = tmp;
    B.push_back(tmp);
  }
  B.push_back(0);

  sort(B.begin(), B.end(), greater<int>{});

  for(int i=0, cur=360; i<B.size(); ++i) {
    chmax(ans, cur-B[i]);
    cur = B[i];
  }
  cout << ans << endl;

}

