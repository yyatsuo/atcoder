#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  string S; cin >> S;
  string p = S.substr(0,1);
  //cout << p << endl;
  int ans = 1;
  for(int i=1; i<S.size();) {
    int r = 1;
    while(1) {
      if(p == S.substr(i,r)){
        ++r;
        if(i+r > S.size()) {
          --ans;
          break;
        }
      } else {
        p = S.substr(i,r);
        break;
      }
    }
    ++ans;
    //cout << p << endl;
    i = i+r;
  }
  cout << ans << endl;
}

