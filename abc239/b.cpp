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
  string S; cin >> S;
  if(S.size() == 1)
  {
    cout << 0 << endl;
  }
  else if(S[0] != '-' || S[S.size()-1] == '0')
  {
    S.pop_back();
    cout << S << endl;
  }
  else if(S.size()==2 && S[0]=='-')
  {
    cout << -1 << endl;
  }
  else
  {
    S.pop_back();
    printf("%lld\n", stoll(S)-1 );
  }
}

