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

ll digit(ll n) {
  ll ret = 0;
  while(n!=0) {
    n/=10;
    ++ret;
  }
  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ull A,B,X; cin >> A >> B >> X;
  ull N = 0;
  ull pN = LLONG_MAX;
  for(ull N_left=0,N_right=1000000000;;) {
    //cout << N_left << " " << N_right << endl;
    if(N_left >= N_right) break;
    N = (N_right+N_left)/2;
    if(pN==N && N_right != N_left) {
      --N_right;
      N = (N_right+N_left)/2;
    }
    //if(A*N+B*floor(log10(N)+1) <= X) {
    if(A*N+B*digit(N) <= X) {
      N_left = N;
    } else {
      N_right = N;
    }
    pN=N;
  }
  //while(A*(N+1)+B*floor(log10(N+1)+1)<=X && N < 1000000000) { ++N; }
  while(A*(N+1)+B*digit(N+1)<=X && N < 1000000000) { ++N; }
  //while(A*(N-1)+B*floor(log10(N-1)+1)>X && N > 0) { --N; }
  while(A*(N-1)+B*digit(N-1)>X && N > 0) { --N; }
  cout << N << endl;
}
