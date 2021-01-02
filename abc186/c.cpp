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
  int N;
  cin >> N;
  int ans = 0;
  for(int i=1; i<=N; ++i) {
    char str_dec[100];
    char str_oct[100];
    rep(i,100){
      str_dec[i] = 0;
      str_oct[i] = 0;
    }
    sprintf(str_dec,"%d",i);
    sprintf(str_oct,"%o",i);
    bool isOk = true;
    for(char c:str_dec) {
      if(c == '7') {
        isOk = false;
        break;
      }
    }
    if(isOk) {
      for(char c:str_oct) {
        if(c == '7') {
          isOk = false;
          break;
        }
      }
    }
    if(isOk) ++ans;
  }
  cout << ans << endl;
}

