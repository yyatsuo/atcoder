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
  ll N; cin >> N;
  string s, t;
  cin >> s >> t;
  ll k = 0;
  for(ll i=0; i<s.size(); ++i) {
    k = 0;
    for(ll j=0; j+i<s.size(); ++j) {
      if(s[i+j] == t[j]) {
        if(i+j == s.size()-1) {
          k = j+1;
          goto end;
        }
      } else {
        break;
      }
    }
  }
  end:
  cout << N+(N-k) << endl;
}
