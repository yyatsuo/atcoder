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
  int N, Q; cin >> N >> Q;
  vector<int> A(N,0), L(Q), R(Q), T(Q);
  rep(i, Q) cin >> L[i] >> R[i] >> T[i];

  rep(i, Q) {
    for(int n=L[i]-1; n<R[i]; ++n) {
      A[n] = T[i];
    }
  }
  for(int a:A) cout << a << endl;
}

