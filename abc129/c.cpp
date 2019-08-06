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
  int N,M; cin >> N >> M;
  vector<ll> mem(N+10,0);
  rep(i, M) {
    int A; cin >> A;
    mem[A] = -1;
  }
  mem[0] = 1;
  rep(i, N+1) {
    if(mem[i] >=0 ) {
      if(mem[i+1] >= 0) mem[i+1] = (mem[i]+mem[i+1])%MOD;
      if(mem[i+2] >= 0) mem[i+2] = (mem[i]+mem[i+2])%MOD;
    }
  }
  cout << mem[N] << endl;
}

