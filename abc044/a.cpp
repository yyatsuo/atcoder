#include <bits/stdc++.h>
#define INF LLONG_MAX
#define Int long long
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  int N,K,X,Y;
  cin >> N >> K >> X >> Y;
  int ans = 0;
  rep(i,N) {
    if(i<K) ans += X;
    else ans += Y;
  }
  cout << ans << endl;
}

