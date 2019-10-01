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
  string S; cin >> S;
  vector<bool> dir(4, false);
  for(char c:S) {
    if(c == 'S') dir[0]=true;
    else if(c == 'N') dir[1]=true;
    else if(c == 'E') dir[2]=true;
    else dir[3]=true;
  }
  if(dir[0] && dir[1] && dir[2] && dir[3]) cout << "Yes" << endl;
  else if(dir[0] && dir[1] && !dir[2] && !dir[3]) cout << "Yes" << endl;
  else if(!dir[0] && !dir[1] && dir[2] && dir[3]) cout << "Yes" << endl;
  else cout << "No" << endl;
}

