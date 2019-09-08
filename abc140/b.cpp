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
  int N; cin >> N;
  vector<int> A(N+1), B(N+1), C(N);
  for(int i=1; i<=N; ++i) cin >> A[i];
  for(int i=1; i<=N; ++i) cin >> B[i];
  for(int i=1; i<=N-1; ++i) cin >> C[i];
  int ans = 0, prev = 0;
  for(int i=1; i<=N; ++i) {
    ans += B[A[i]];
    if(A[i]-prev == 1) ans += C[prev];
    prev = A[i];
  }
  cout << ans << endl;
}

