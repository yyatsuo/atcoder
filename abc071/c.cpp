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
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end(), greater<int>());
  ll x=0, y=0;
  for(ll i=0; i<N-1; ++i) {
    if(A[i] == A[i+1]) {
      if(x == 0) x = A[i];
      else if(y == 0) y = A[i];
      ++i;
    }
  }
  cout << x * y << endl;
}

