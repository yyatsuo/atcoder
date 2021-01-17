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
  string S; cin >> S;
  string s1 = S.substr(0, 2);
  string s2 = S.substr(2, 2);
  int i1 = stoi(s1);
  int i2 = stoi(s2);

  if(1 <= i1 && i1 <= 12 && 1 <= i2 && i2 <= 12) {
      cout << "AMBIGUOUS" <<endl;
  }
  else if ( 1 <= i1 && i1 <= 12) {
      cout << "MMYY" << endl;
  }
  else if ( 1 <= i2 && i2 <= 12) {
      cout << "YYMM" << endl;
  } else {
    cout << "NA" << endl;
  }
}

