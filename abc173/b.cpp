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
  int N; cin >> N;
  vector<string> S(N);
  vector<int> ret(4,0);
  rep(i,N) cin >> S[i];
  for(auto s:S) {
    switch(s[0]) {
      case 'A':
        ++ret[0];
        break;
      case 'W':
        ++ret[1];
        break;
      case 'T':
        ++ret[2];
        break;
      case 'R':
      default:
        ++ret[3];
    }
  }
  cout << "AC x " << ret[0] <<endl;
  cout << "WA x " << ret[1] <<endl;
  cout << "TLE x " << ret[2] <<endl;
  cout << "RE x " << ret[3] <<endl;
}

