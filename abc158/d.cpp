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
  string S; S.reserve(300000); cin >> S;
  ll Q; cin >> Q;
  int dir = 1;
  rep(i, Q) {
    int T; cin >> T;
    if(T == 1) {
      dir *= -1;
    } else {
      int F; string c;
      cin >> F >> c;
      if(F == 1 && dir == 1) S.insert(0,c);
      else if(F == 2 && dir == -1) S.insert(0,c);
      else if(F == 1 && dir == -1) S += c;
      else if(F == 2 && dir == 1) S += c;
      else cerr << "Error" << endl;
    }
  }
  if(dir == -1) {
    for(ll i=S.size()-1; i>=0; --i) cout << S[i];
  } else {
    cout << S;
  }
  cout << endl;
}

