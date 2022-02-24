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
  vector<int> S(N);
  rep(i,N) cin >> S[i];

  vector<int> area;
  for(int a=1; a<=250; ++a) {
    for(int b=1; b<=250; ++b) {
      int tmp = 4*a*b + 3*a + 3*b;
      area.push_back(tmp);
    }
  }
  sort(area.begin(), area.end());

  int ans = 0;
  for(int s:S) {
    if( ! binary_search(area.begin(), area.end(), s) ) ++ans;
  }

  cout << ans << endl;
}

