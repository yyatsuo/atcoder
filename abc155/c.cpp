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
  map<string, int> m;
  int max = 1;
  rep(i, N) {
    string s; cin >> s;
    auto it = m.find(s);
    if(it != m.end()) {
      ++(it->second);
      if(it->second > max) {
        max = it->second;
      }
    } else {
      m.insert(make_pair(s,1));
    }
  }
  for(auto it=m.begin(); it != m.end(); ++it) {
    if(it->second == max) {
      cout << it->first << endl;
    }
  }
}

