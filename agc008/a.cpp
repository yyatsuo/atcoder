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
  int X, Y; cin >> X >> Y;
  int ans = abs(abs(X)-abs(Y));
  if(X<0&&Y<X)ans+=2;
  else if(X>0&&Y>0&&X>Y)ans+=2;
  else if(X<0&&Y<=0&&X<Y)ans+=0;
  else if(X<0&&Y<0&&X<Y)ans++;
  else if((X<0&&Y>0)||(X>0&&Y<0))ans++;
  else if(X==0&&Y<0)ans++;
  else if(X>0&&Y==0)ans++;
  cout<<ans<<endl;
}

