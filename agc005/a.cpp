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
  string s; cin >> s;
  ll cnt=0, tmp=0;
  for(auto c:s) {
    if(c == 'S') ++tmp;
    if(c == 'T' && tmp !=0) {
      --tmp;
      ++cnt;
    }
  }
  cout << s.size()-(cnt*2) << endl;
}

