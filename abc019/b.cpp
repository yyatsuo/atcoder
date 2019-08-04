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
  int cnt=1; char cc=S[0];
  for(int i=1; i<S.size(); ++i) {
    char c = S[i];
    if(c != cc) {
      cout << cc << cnt;
      cnt = 1;
      cc = c;
    } else {
      ++cnt;
    }
  }
  cout << cc << cnt << endl;
}

