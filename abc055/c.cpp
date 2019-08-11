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
  ull s, c; cin >> s >> c;
  ull ans = 0;
  if(2*s <= c) {
    ans += s;
    c -= 2*s; s = 0;
  } else {
    ans += c/2;
    c = c%2; s = 0;
  }
  ans += c/4;
  cout << ans << endl;
}

