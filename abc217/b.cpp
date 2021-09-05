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
  vector<string> S(3);
  rep(i,3) cin >> S[i];
  sort(S.begin(), S.end());
  if(S[0] != "ABC") cout << "ABC" << endl;
  else if(S[1] != "AGC") cout << "AGC" << endl;
  else if(S[2] != "AHC") cout << "AHC" << endl;
  else cout << "ARC" << endl;
}

