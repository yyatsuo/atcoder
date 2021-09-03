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
  string s; cin >> s;
  rep(i, s.size()) {
    char c = s[i];
    if(i%2 == 0) { // Odd
      if('A' <= c && c <='Z') {
        cout << "No" << endl;
        return 0;
      }
    } else {
      if('a' <= c && c <='z') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}

