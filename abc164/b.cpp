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
  int A,B,C,D;
  cin>>A>>B>>C>>D;

  int cnt=1;
  while(A>0&&C>0) {
    if(cnt%2) {
      C-=B;
    } else {
      A-=D;
    }
    if(C<=0) cout<<"Yes"<<endl;
    if(A<=0) cout<<"No"<<endl;
    ++cnt;
  }
}

